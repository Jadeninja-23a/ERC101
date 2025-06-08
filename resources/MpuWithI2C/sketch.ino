#include <Wire.h> // Include Wire library for I2C communication

const int MPU_ADDR = 0x68; // I2C address of the MPU6050 (default is 0x68)
const int sensitivity = 4096; // Accelerometer sensitivity for ±8g (4096 LSB/g)

void setup() {
  Wire.begin(); // Initialize I2C communication
  Serial.begin(9600); // Begin serial communication at 9600 baud rate (for USB serial monitor)

  // Wake up MPU6050 from sleep mode
  Wire.beginTransmission(MPU_ADDR); // Start I2C transmission to MPU6050
  Wire.write(0x6B); // Address of the power management register (PWR_MGMT_1)
  Wire.write(0); // Set the register to 0 => wake up the MPU6050
  Wire.endTransmission(); // End transmission

  // Set gyroscope sensitivity to ±1000 degrees/sec (bits 4 and 3 set => 0x10)
  Wire.beginTransmission(MPU_ADDR); 
  Wire.write(0x1B); // Gyroscope configuration register
  Wire.write(0x10); // Set bits for ±1000°/s full scale range
  Wire.endTransmission(true); // End transmission

  // Set accelerometer sensitivity to ±8g (bits 4 and 3 set => 0x10)
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x1C); // Accelerometer configuration register
  Wire.write(0x10); // Set bits for ±8g full scale range
  Wire.endTransmission(true); // End transmission
}

void loop() {
  // Request starting from ACCEL_XOUT_H (first data register for accelerometer)
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B); // Register address of ACCEL_XOUT_H
  Wire.endTransmission(false); // Send restart condition without releasing bus

  // Request 14 bytes: 6 for accelerometer, 2 for temp, 6 for gyroscope
  Wire.requestFrom(MPU_ADDR, 14);

  if (Wire.available() == 14) {
    // Read raw 16-bit accelerometer data
    int16_t ax = Wire.read() << 8 | Wire.read(); // ACCEL_X
    int16_t ay = Wire.read() << 8 | Wire.read(); // ACCEL_Y
    int16_t az = Wire.read() << 8 | Wire.read(); // ACCEL_Z

    int16_t tmp = Wire.read() << 8 | Wire.read(); // TEMP_OUT

    // Read raw 16-bit gyroscope data
    int16_t gx = Wire.read() << 8 | Wire.read(); // GYRO_X
    int16_t gy = Wire.read() << 8 | Wire.read(); // GYRO_Y
    int16_t gz = Wire.read() << 8 | Wire.read(); // GYRO_Z

    // Convert accelerometer data to 'g' by dividing by sensitivity (4096 LSB/g for ±8g)
    float ax_f = ax * 1.0 / sensitivity;
    float ay_f = ay * 1.0 / sensitivity;
    float az_f = az * 1.0 / sensitivity;

    Serial.print("ACCEL [X,Y,Z]: ");
    Serial.print(ax_f); Serial.print(", ");
    Serial.print(ay_f); Serial.print(", ");
    Serial.print(az_f); Serial.print(" | ");

    // Convert gyroscope data to degrees/sec
    // For ±1000°/s sensitivity, scale factor is ~32.8 LSB/(°/s)
    float gx_f = gx * 1.0 / 32.8;
    float gy_f = gy * 1.0 / 32.8;
    float gz_f = gz * 1.0 / 32.8;

    Serial.print("GYRO [X,Y,Z]: ");
    Serial.print(gx_f); Serial.print(", ");
    Serial.print(gy_f); Serial.print(", ");
    Serial.print(gz_f); Serial.print(" | ");

    // Convert temperature to Celsius
    // Formula from MPU6050 datasheet: Temp in C = (raw / 340.0) + 36.53
    float tempC = (tmp / 340.0) + 36.53;

    Serial.print("TMP "); 
    Serial.print(tempC);
    Serial.println(" ");
  }

  delay(300); // Wait 300 milliseconds before reading again
}


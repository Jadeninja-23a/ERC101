#include <Wire.h>

const int MPU_ADDR = 0x68;
//default sensitivity for +- 8g
const int sensitivity = 	4096;
void setup() {
  Wire.begin();
  Serial.begin(9600);       // UART over USB

  // Wake up MPU6050
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B); // Power Management 1 register
  Wire.write(0);    // Wake up MPU6050
  Wire.endTransmission();

  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x1B);
  Wire.write(0x10);
  //set to -1000 to + 1000 degrees/s
  Wire.endTransmission(true);

  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x1C);
  Wire.write(0x10);
  //set to +- 8g range 
  Wire.endTransmission(true);
}
void loop() {
    // Request accel and gyro data
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x3B); // Start from ACCEL_XOUT_H
    Wire.endTransmission(false);
    Wire.requestFrom(MPU_ADDR, 14); // Accel (6), Temp (2), Gyro (6)

    if (Wire.available() == 14) {
      int16_t ax = Wire.read() << 8 | Wire.read();
      int16_t ay = Wire.read() << 8 | Wire.read();
      int16_t az = Wire.read() << 8 | Wire.read();
      int16_t tmp = Wire.read()<<8| Wire.read();
      int16_t gx = Wire.read() << 8 | Wire.read();
      int16_t gy = Wire.read() << 8 | Wire.read();
      int16_t gz = Wire.read() << 8 | Wire.read();

      float ax_f = (ax*1.0 / sensitivity);
      float ay_f = (ay*1.0 / sensitivity);
      float az_f = (az*1.0 / sensitivity);
      
      Serial.print("ACCEL [X,Y,Z]: ");
      Serial.print(ax_f); Serial.print(", ");
      Serial.print(ay_f); Serial.print(", ");
      Serial.print(az_f); Serial.print(" | ");

      float gx_f = gx*1.0/32.8;
      float gy_f = gy*1.0/32.8;
      float gz_f = gz*1.0/32.8;

      Serial.print("GYRO [X,Y,Z]: ");
      Serial.print(gx_f); Serial.print(", ");
      Serial.print(gy_f); Serial.print(", ");
      Serial.print(gz_f); Serial.print(" | ");

      float tempC = (tmp / 340.0) + 36.53;

      Serial.print("TMP "); Serial.print(tempC);
      Serial.println(" ");
    }

  delay(300); // Delay between reads
}

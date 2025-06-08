// High Priority Task on Core 1 (Serial messages)
void highPriorityTask(void *pvParameters) {
  while (1) {
    Serial.println("🔴 High Priority Task running on Core 1");
    // No delay — occupies core completely
  }
}

// Low Priority Task on Core 0 (LED blinking)
void lowPriorityTask(void *pvParameters) {
  pinMode(2, OUTPUT);  // Built-in LED on many boards

  while (1) {
    digitalWrite(2, LOW);
    Serial.println("🟢 LED OFF (Low Priority Task on Core 0)");
    vTaskDelay(200 / portTICK_PERIOD_MS);

    digitalWrite(2, HIGH);
    Serial.println("🟢 LED ON (Low Priority Task on Core 0)");
    vTaskDelay(200 / portTICK_PERIOD_MS);

    
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);  // Give Serial Monitor time to connect

  // Create Low Priority LED Blink Task on Core 0
  xTaskCreatePinnedToCore(
    lowPriorityTask,"LowPriorityTask",1000,NULL,
    1,    // Lower priority
    NULL,
    0     // Core 0
  );
  // Create High Priority Serial Task on Core 1
  xTaskCreatePinnedToCore(
    highPriorityTask,"HighPriorityTask",1000,NULL,
    2,    // Higher priority
    NULL,
    1     // Core 1
  );
}

void loop() {
  // Nothing here — tasks take over
}

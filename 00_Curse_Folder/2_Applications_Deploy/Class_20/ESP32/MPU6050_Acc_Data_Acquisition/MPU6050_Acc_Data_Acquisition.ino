/*
 * Based on I2C device class (I2Cdev) Arduino sketch for MPU6050 class by Jeff Rowberg <jeff@rowberg.net>
 * and Edge Impulse Data Forwarder Exampe (Arduino) - https://docs.edgeimpulse.com/docs/cli-data-forwarder
 * 
 * Developed by M.Rovai for IESTI01 TinyML Course
 */

#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"

#define FREQUENCY_HZ  50
#define INTERVAL_MS   (1000 / (FREQUENCY_HZ + 1))
static unsigned long last_interval_ms = 0;

#define OUTPUT_READABLE_ACCELGYRO
MPU6050 accelgyro;
int16_t ax, ay, az;

void setup() {
  
    Wire.begin();
    Serial.begin(115200);

    // initialize device
    Serial.println("Initializing I2C devices...");
    accelgyro.initialize();

    // verify connection
    Serial.println("Testing device connections...");
    Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
}

void loop() {

      if (millis() > last_interval_ms + INTERVAL_MS) {
        last_interval_ms = millis();
        
        // read raw accel/gyro measurements from device
        accelgyro.getAcceleration(&ax, &ay, &az);

        Serial.print(ax); Serial.print("\t");
        Serial.print(ay); Serial.print("\t");
        Serial.println(az); 
      }
}

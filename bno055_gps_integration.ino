#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <Adafruit_GPS.h>

#define GPSSerial Serial1  // Assuming GPS module is connected to Serial1

Adafruit_GPS GPS(&GPSSerial);

// BNO055 sensor object
Adafruit_BNO055 bno = Adafruit_BNO055();

void setup() {
  Serial.begin(9600);
  GPSSerial.begin(9600);

  // Initialize BNO055 sensor
  if (!bno.begin())
  {
    Serial.println("Error initializing BNO055 sensor!");
    while (1);
  }

  delay(1000);

  // Initialize GPS
  GPS.begin(9600);
  GPS.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCGGA);
  GPS.sendCommand(PMTK_SET_NMEA_UPDATE_1HZ);
}

void loop() {
  // Read BNO055 sensor data
  sensors_event_t event;
  bno.getEvent(&event);
  float yaw = event.orientation.x;
  
  // Read GPS data
  while (GPSSerial.available()) {
    char c = GPS.read();
    if (GPS.newNMEAreceived() && GPS.parse(GPS.lastNMEA())) {
      if (GPS.fix) {
        float speed_knots = GPS.speed;
        float speed_mps = speed_knots * 0.514; // Convert knots to meters per second

        // Use speed_mps for further calculations or processing
        Serial.print("Yaw: "); Serial.print(yaw); Serial.print(" | Speed (m/s): "); Serial.println(speed_mps);
      }
    }
  }

  delay(1000);  // Adjust delay based on your desired update rate
}

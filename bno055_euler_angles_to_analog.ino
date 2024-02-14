#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>

// BNO055 sensor object
Adafruit_BNO055 bno = Adafruit_BNO055();

void setup() {
  Serial.begin(9600);
  
  // Initialize BNO055 sensor
  if(!bno.begin())
  {
    Serial.println("Error initializing BNO055 sensor!");
    while(1);
  }
  
  delay(1000);
}

void loop() {
  // Read sensor data
  sensors_event_t event;
  bno.getEvent(&event);

  // Extract the Euler angles (yaw, pitch, roll)
  float yaw = event.orientation.x;
  float pitch = event.orientation.y;
  float roll = event.orientation.z;

  // Map the Euler angles to the voltage range (0 to 5V)
  int voltageYaw = map(yaw, -180, 180, 0, 1023);
  int voltagePitch = map(pitch, -90, 90, 0, 1023);
  int voltageRoll = map(roll, -90, 90, 0, 1023);

  // Send the voltages to the analog pins (A0, A1, A2)
  analogWrite(A0, voltageYaw / 4);    // Assuming the ECU expects a 0-255 range for analog inputs
  analogWrite(A1, voltagePitch / 4);
  analogWrite(A2, voltageRoll / 4);

  // Print the angles and voltages to Serial Monitor
  Serial.print("Yaw: "); Serial.print(yaw); Serial.print(" | Voltage: "); Serial.println(voltageYaw);
  Serial.print("Pitch: "); Serial.print(pitch); Serial.print(" | Voltage: "); Serial.println(voltagePitch);
  Serial.print("Roll: "); Serial.print(roll); Serial.print(" | Voltage: "); Serial.println(voltageRoll);

  delay(1000);  // Adjust delay based on your desired update rate
}

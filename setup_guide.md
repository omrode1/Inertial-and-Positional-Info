# Setup Guide

Follow these step-by-step instructions to set up the Integrated Vehicle Dynamics Monitoring System on your hardware.

## Hardware Requirements

1. **Arduino Board:** Compatible with the BNO055 sensor and GPS module.
2. **BNO055 Sensor:** Connect to the Arduino for measuring orientation angles.
3. **GPS Module:** Connect to the Arduino for providing speed and positional data.

## Wiring Connections

1. Connect the BNO055 sensor to the designated pins on the Arduino.
2. Connect the GPS module to the designated pins on the Arduino.

Refer to the `schematic_diagram.pdf` in the `hardware/` directory for a detailed schematic diagram illustrating the connections.

## Arduino Sketch

1. Open the Arduino IDE.
2. Load the `vehicle_dynamics_monitor.ino` sketch.
3. Upload the sketch to the Arduino board.

## Serial Monitor

1. Open the Arduino Serial Monitor.
2. View real-time data on yaw angles and vehicle speed.

## Additional Notes

- Ensure proper power supply to the sensors.
- Calibrate the BNO055 sensor for accurate orientation data.

Refer to the `sensor_calibration.md` for instructions on calibrating the BNO055 sensor.

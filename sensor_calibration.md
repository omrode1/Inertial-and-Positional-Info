# Sensor Calibration Guide

Calibrating the BNO055 sensor is crucial for obtaining accurate orientation data. Follow these steps to ensure proper calibration:

## 1. Power On the System

Ensure that the Arduino board, BNO055 sensor, and GPS module are properly powered on.

## 2. Place the System on a Stable Surface

Position the system on a stable and flat surface, ensuring that it remains stationary during calibration.

## 3. BNO055 Sensor Calibration

1. Open the Arduino IDE.
2. Load the `Adafruit_BNO055` library examples.
3. Upload the `sensorapi` example to the Arduino.
4. Open the Serial Monitor to view calibration status.

## 4. Verify Calibration Status

Check the calibration status on the Serial Monitor. Aim for a calibration level of 3 (fully calibrated) for all axes (system, gyro, accelerometer, magnetometer).

## 5. Recalibration (If Necessary)

If calibration levels are not optimal, recalibrate the sensor by repeating the process or adjusting the placement on the stable surface.

## 6. Save Calibration Parameters

Once calibrated, note down the calibration parameters obtained from the Serial Monitor for future reference.

## 7. Update Calibration in Main Sketch

Update the calibration parameters in the `vehicle_dynamics_monitor.ino` sketch to ensure accurate orientation readings.

```markdown
Feel free to adjust the content based on specific details or steps related to your project.

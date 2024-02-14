# Integrated Vehicle Dynamics Monitoring System

The Integrated Vehicle Dynamics Monitoring System is a real-time monitoring solution for analyzing the dynamics of a vehicle using the BNO055 inertial measurement unit (IMU) and a GPS module. This project provides valuable insights into the vehicle's orientation, motion, and speed, making it a versatile tool for performance optimization, real-world monitoring, and research and development in the automotive field.

## Table of Contents

1. [**Overview**](#overview)
2. [**Key Features**](#key-features)
3. [**Getting Started**](#getting-started)
    - [Hardware Requirements](#hardware-requirements)
    - [Wiring Connections](#wiring-connections)
    - [Arduino Sketch](#arduino-sketch)
    - [Serial Monitor](#serial-monitor)
4. [**Sensor Calibration**](#sensor-calibration)
    - [Power On the System](#1-power-on-the-system)
    - [Place the System on a Stable Surface](#2-place-the-system-on-a-stable-surface)
    - [BNO055 Sensor Calibration](#3-bno055-sensor-calibration)
    - [Verify Calibration Status](#4-verify-calibration-status)
    - [Recalibration (If Necessary)](#5-recalibration-if-necessary)
    - [Save Calibration Parameters](#6-save-calibration-parameters)
    - [Update Calibration in Main Sketch](#7-update-calibration-in-main-sketch)
5. [**Schematic Diagram**](#schematic-diagram)
    - [Creating a Schematic Diagram with Fritzing](#creating-a-schematic-diagram-with-fritzing)
6. [**Contributing**](#contributing)
7. [**License**](#license)

## Overview

The Integrated Vehicle Dynamics Monitoring System combines the power of the BNO055 IMU and a GPS module to provide real-time insights into a vehicle's dynamics. It offers a holistic view of orientation angles, motion, and speed, making it valuable for various automotive applications.

## Key Features

- High-precision orientation measurement with BNO055.
- Accurate speed and positional data from the GPS module.
- Holistic view of vehicle dynamics through sensor fusion.

## Getting Started

### Hardware Requirements

1. **Arduino Board:** Compatible with the BNO055 sensor and GPS module.
2. **BNO055 Sensor:** Connect to the Arduino for measuring orientation angles.
3. **GPS Module:** Connect to the Arduino for providing speed and positional data.

### Wiring Connections

1. Connect the BNO055 sensor to the designated pins on the Arduino.
2. Connect the GPS module to the designated pins on the Arduino.

Refer to the [schematic diagram](#schematic-diagram) for a detailed schematic illustrating the connections.

### Arduino Sketch

1. Open the Arduino IDE.
2. Load the `vehicle_dynamics_monitor.ino` sketch.
3. Upload the sketch to the Arduino board.

### Serial Monitor

1. Open the Arduino Serial Monitor.
2. View real-time data on yaw angles and vehicle speed.

### Sensor Calibration

#### 1. Power On the System

Ensure that the Arduino board, BNO055 sensor, and GPS module are properly powered on.

#### 2. Place the System on a Stable Surface

Position the system on a stable and flat surface, ensuring that it remains stationary during calibration.

#### 3. BNO055 Sensor Calibration

1. Open the Arduino IDE.
2. Load the `Adafruit_BNO055` library examples.
3. Upload the `sensorapi` example to the Arduino.
4. Open the Serial Monitor to view calibration status.

#### 4. Verify Calibration Status

Check the calibration status on the Serial Monitor. Aim for a calibration level of 3 (fully calibrated) for all axes (system, gyro, accelerometer, magnetometer).

#### 5. Recalibration (If Necessary)

If calibration levels are not optimal, recalibrate the sensor by repeating the process or adjusting the placement on the stable surface.

#### 6. Save Calibration Parameters

Once calibrated, note down the calibration parameters obtained from the Serial Monitor for future reference.

#### 7. Update Calibration in Main Sketch

Update the calibration parameters in the `vehicle_dynamics_monitor.ino` sketch to ensure accurate orientation readings.

## Schematic Diagram

Creating a schematic diagram involves using a circuit design tool. [Fritzing](https://fritzing.org/) is a popular open-source tool for creating circuit diagrams. Refer to the [Creating a Schematic Diagram with Fritzing](#creating-a-schematic-diagram-with-fritzing) section for detailed instructions.

## Contributing

Contributions are welcome! Please follow the [CONTRIBUTING.md](CONTRIBUTING.md) guidelines when contributing to this project.

## License

This project is licensed under the [MIT License](LICENSE.txt).

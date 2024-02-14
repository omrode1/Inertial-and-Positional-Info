# Vehicle Dynamics Monitor

This Arduino sketch monitors vehicle dynamics by integrating data from the BNO055 sensor and a GPS module. It provides real-time information on yaw angles and vehicle speed.

## Components

- **BNO055 Sensor:** Measures orientation angles (yaw, pitch, roll).
- **GPS Module:** Provides accurate speed and positional data.

## Setup

1. Connect the BNO055 sensor and GPS module to the Arduino.
2. Upload the `vehicle_dynamics_monitor.ino` sketch to the Arduino.
3. Open the Arduino Serial Monitor to view real-time data.

## Additional Information

- The sketch combines inertial and positional data for a comprehensive view of vehicle dynamics.
- Adjust the delay in the loop based on your desired update rate.
- Ensure proper calibration of sensors for accurate results.

## License

This project is licensed under the [MIT License](LICENSE.txt).

# 🏠 Smart Home Simulation (ESP32)

![Project Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Wokwi%20Simulator-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C++-orange?style=for-the-badge)

An IoT-based embedded system project that simulates real-time temperature and humidity monitoring using an ESP32 microcontroller, DHT22 sensor, and an SSD1306 OLED display.

---

## 🔗 Live Simulation
You can run and test this project instantly in your browser without any hardware setup.
[![Run on Wokwi](https://img.shields.io/badge/WOKWI-SIMULATION-blue?style=for-the-badge&logo=cpu)](https://wokwi.com/projects/451323028602832897)

---

## 🛠️ Project Workflow
The following workflow was managed using **GitHub Projects** to ensure a structured development process:

1. **Hardware Configuration**: Defining the virtual connections in `diagram.json`.
2. **Firmware Development**: Writing the C++ logic to interface sensors and displays.
3. **Simulation & Testing**: Real-time verification using the Wokwi engine.
4. **Documentation**: Finalizing code comments and README.

---

## 🏗️ Hardware Architecture
The system uses the following virtual components connected via **I2C** and **GPIO**:

| Component | Purpose | Connection |
| :--- | :--- | :--- |
| **ESP32 DevKit** | Central Processing Unit | Main Controller |
| **DHT22** | Temp/Humidity Sensing | GPIO 15 |
| **SSD1306 OLED** | Visual Data Display | I2C (SDA 21, SCL 22) |

---

## 📜 Installation & Usage
1. Click the **WOKWI SIMULATION** badge above.
2. Press the **Play** button in the simulator.
3. Click on the **DHT22** sensor to adjust temperature/humidity sliders.
4. Observe real-time data updates on the OLED screen.

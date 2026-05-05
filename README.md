# Climate Control System using Arduino & ESP32 (Wokwi + Tinkercad)

## 📌 Overview
This project implements a temperature-based Climate Control System using Arduino and ESP32. The system monitors temperature in real-time and dynamically controls fan speed using PWM (Pulse Width Modulation).

The project was implemented and tested on two platforms:
- Tinkercad (Arduino UNO with TMP36 sensor)
- Wokwi (ESP32 with NTC temperature sensor)

---

## ⚙️ Features
- 🌡️ Real-time temperature sensing
- 🌀 Automatic fan speed control using PWM
- 📈 Linear speed variation based on temperature
- 🔴 LED indication (ESP32 simulation)
- 🔄 Continuous monitoring system
- 🔬 Dual-platform simulation (Wokwi + Tinkercad)

---

## 🛠️ Components Used

### 🔹 Tinkercad Setup
- Arduino UNO
- TMP36 Temperature Sensor
- DC Motor (Fan)
- NPN Transistor
- Resistor

### 🔹 Wokwi Setup
- ESP32
- NTC Temperature Sensor (Analog)
- LED (Fan simulation)

---

## 🚀 Working Principle

The system reads temperature from the sensor and controls the fan speed based on predefined thresholds:

- **Temperature < 27°C**
  - Fan OFF

- **Temperature between 27°C and 40°C**
  - Fan speed increases linearly using PWM

- **Temperature ≥ 40°C**
  - Fan runs at maximum speed

This ensures efficient and smooth climate control instead of abrupt ON/OFF switching.

---

## 🔢 Control Logic (PWM Mapping)

- Linear mapping is applied between 27°C and 40°C
- PWM value ranges from 0 to 255
- Higher temperature → higher fan speed

---

## 🔬 Simulation Platforms

### 🔹 Tinkercad
- Used TMP36 sensor with voltage-to-temperature conversion
- Fan controlled using transistor and PWM

### 🔹 Wokwi
- Used NTC sensor with ADC mapping
- PWM output visualized using LED brightness

---

## 📸 Outputs

### 🔹 Tinkercad Simulation
(Add your Tinkercad screenshots here)

### 🔹 Wokwi Simulation
(Add your Wokwi screenshots here)

---

## 📂 Project Structure

---

## 📌 Key Learning

- Analog sensor interfacing
- ADC to temperature conversion
- PWM-based motor control
- Linear mapping technique
- Simulation using multiple platforms
- Embedded control system design

---

## 🔗 Simulation Links
- Wokwi: (Add your link)
- Tinkercad: (Add your link)

---

## 👩‍💻 Author
**Amulya S Gupta**

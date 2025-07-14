# Final Project IoT - Samsung Innovation Campus

This project is developed as part of the **Samsung Innovation Campus (SIC)**, a global educational program by Samsung that aims to empower young people with essential technology skills. SIC provides training in key areas such as AI, IoT, Cloud and coding, helping participants build a strong foundation for their future careers in the tech industry.

You can learn more about the program here: [Samsung Innovation Campus (SIC)](https://csr.samsung.com/vi/programViewSic.do)

## About This Project

This is a capstone project to apply the knowledge and skills gained throughout the SIC course. 

# 🌱 IoT Smart Farm System with Raspberry Pi 5

This project aims to **research, design, and build** a **smart agricultural system** using a Raspberry Pi 5 and commonly available sensors. The system uses **MariaDB** to store sensor data and supports **monitoring and controlling** via a web dashboard.

---

## 🚀 Features

- 🌡️ **Monitor temperature and humidity** inside the greenhouse using **DHT11**
- 🌱 **Monitor soil moisture** using a soil sensor
- 💡 **Control lighting**, 🌬️ **ventilation fans**, and 💧 **pumps**
- 🌐 **Web-based dashboard** to view live data and control devices remotely
- 🗄️ **Data stored in MariaDB** for persistence and analytics

---

## 🧠 Architecture: MVC Pattern

This project follows the **Model-View-Controller** (MVC) pattern for better separation of concerns.

- **Model**: Handles data logic and database interaction (MariaDB)
- **View**: Front-end web interface (HTML/CSS/JS)
- **Controller**: Interfaces with sensors/devices and responds to web actions

---

## 🗂️ Folder Structure

See the main folder structure above. Each part of the system is modular and follows best practices for embedded Python and web integration.

---

## 🧰 Technologies Used

- **Raspberry Pi 5**
- **Python 3**
- **Flask** (or FastAPI)
- **MariaDB** for database
- **HTML/CSS/JavaScript** for front-end
- **DHT11** for temperature and humidity
- **Soil Moisture Sensor**
- **Relay Modules** for controlling devices

---

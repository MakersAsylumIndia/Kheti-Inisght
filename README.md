We are Team Kheti Insight!, 
Welcome to our Innovation School Project repository! We are a team of four students working on building a Smart Soil Monitoring Robot that helps measure and track key environmental factors for agriculture and research.

🔍 Problem Statement: 
Farmers and agricultural researchers often face challenges in manually monitoring soil conditions across large plots of land. Traditional methods are labor-intensive, inconsistent, and time-consuming, leading to inefficiencies in irrigation and crop management.

💡 Proposed Solution
Our robot automates the process of measuring soil temperature, moisture, and humidity using onboard sensors and actuators. By integrating a DHT22 sensor, a capacitive soil moisture sensor, an ESP32 microcontroller, and a robotic chassis, we provide a mobile and scalable solution for real-time soil health analysis. This enhances decision-making for sustainable farming.

🔩 Bill of Materials (BOM)
Component	Quantity	Description
ESP32 Development Board	1	Microcontroller with Wi-Fi and Bluetooth
DHT22 Sensor	1	For measuring air temperature and humidity
Capacitive Soil Moisture Sensor	1	For detecting moisture levels in soil
DC Motors + Wheels	2	For robot mobility
Motor Driver (L298N)	1	Controls motors via ESP32
Chassis	1	Base platform to mount all components
Power Supply / Battery Pack	1	For powering the ESP32 and motors
Jumper Wires	Several	For electrical connections
Breadboard	1	For prototyping

🌍 SDG Goals Associated
Goal 2: Zero Hunger – Supports sustainable agriculture through precision farming.

Goal 9: Industry, Innovation and Infrastructure – Promotes innovation in agri-tech.

Goal 13: Climate Action – Enables data-driven environmental monitoring and response.

🛠 Solution Overview
The robot is built on a modular chassis and controlled via an ESP32 board. The sensors collect real-time data:

The DHT22 captures ambient temperature and humidity.

The capacitive soil moisture sensor reads soil moisture levels.

This data is then processed by the ESP32 and can be transmitted or stored for later analysis. The actuators allow the robot to move to different soil patches, enabling wide-area environmental data collection.

🔌 Circuit & CAD Files
Circuit Diagram: Available in the Media folder

Wiring Layout: Diagrams included for all components (ESP32 pin connections, sensor wiring, motor driver interface)


## License

Licenses

<a href="LICENSE.md"><img src="Media\Images\Licenses_facts.svg" width="400" alt="Open Source Licenses Facts"/></a>

#### Hardware
CERN Open Hardware License Version 2 - Strongly Reciprocal ([CERN-OHL-S-2.0](https://spdx.org/licenses/CERN-OHL-S-2.0.html)).

#### Software
MIT open source [license](http://opensource.org/licenses/MIT).

#### Documentation:
<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution 4.0 International License</a>.

---

👥 Contact / Team
Name	Role	Contact / GitHub
[Vedant]	Hardware Integration	GitHub
[Dev]	Code + ESP32 Dev	GitHub
[Pranay]	CAD & Chassis Design	GitHub
[Vedant]	Documentation Lead	GitHub

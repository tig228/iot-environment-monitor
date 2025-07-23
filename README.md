#  IoT Environmental Monitoring System

This is a personal IoT project that monitors **temperature**, **humidity**, and **air quality** in real-time using an **Arduino UNO R4 WiFi**, a **DHT11 sensor**, and an **MQ135 air quality sensor**.
The data is uploaded every 20 seconds to the cloud using **ThingSpeak**, where it is visualized with live charts.

>  Built as a personal project to apply embedded systems, cloud communication, and sensor data processing — ideal for smart climate education initiatives and IoT learning.

##  Components Used
- Arduino UNO R4 WiFi
- DHT11 Temperature & Humidity Sensor
- MQ135 Air Quality Sensor
- Breadboard + Jumper Wires
- ThingSpeak (for cloud data storage and visualization)

##  Features
- Reads temperature, humidity, and air quality every 15 seconds
- Wireless data upload to ThingSpeak using built-in WiFi
- View real-time graphs on a web dashboard
- Dynamic data visualization 
- Auto-refreshing dashboard with historical tracking

##  Wiring Diagram


##  Setup Instructions
1. Connect the sensors as shown in the wiring diagram.
2. Upload the Arduino sketch using the Arduino IDE.
3. Replace the placeholders in the code with your Wi-Fi and ThingSpeak credentials.
4. Open the Serial Monitor to verify data is being sent.
5. View your data on ThingSpeak.

##  Live Dashboard
[View Real-Time Environmental Data on ThingSpeak] https://thingspeak.mathworks.com/channels/3008831 

##  Screenshots
<img width="579" height="398" alt="image" src="https://github.com/user-attachments/assets/81b1b45e-874e-4186-a8aa-e612620e1065" />
<img width="580" height="393" alt="image" src="https://github.com/user-attachments/assets/2b23ea12-9bf6-465e-b7ef-5cf947aaa517" />
<img width="577" height="393" alt="image" src="https://github.com/user-attachments/assets/8233cf2e-f6e8-48ad-83c8-a4851a0d9716" />


##  License
MIT License

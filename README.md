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


## Step-by-Step Setup Guide

This guide will walk you through setting up the Environmental Monitoring System using an Arduino UNO R4 WiFi, DHT11, and MQ135 sensors. The system uploads data to ThingSpeak and displays it in real-time charts.

---

### 1. Connect the Sensors

Use the wiring diagram in this repo to connect your sensors to the Arduino UNO R4 WiFi:

#### DHT11 (Temperature & Humidity)
| DHT11 Pin | Arduino UNO R4 WiFi |
|-----------|----------------------|
| VCC       | 5V                   |
| DATA      | D2                   |
| GND       | GND                  |



#### MQ135 (Air Quality Sensor)
| MQ135 Pin | Arduino UNO R4 WiFi |
|-----------|----------------------|
| VCC       | 5V                   |
| AOUT      | A0                   |
| GND       | GND                  |

---

### 2. Upload the Arduino Sketch

1. Open the `iot_monitoring.ino` file in the Arduino IDE
2. Select **Arduino UNO R4 WiFi** under `Tools > Board`
3. Connect your board via USB-C
4. Click **Verify (✓)** to compile
5. Click **Upload (→)** to upload the code to your board

---

### 3. Configure Wi-Fi & ThingSpeak

Edit the top of your `.ino` file and replace the placeholder values with your own credentials:

```cpp
char ssid[]     = "YOUR_WIFI_NAME";
char pass[]     = "YOUR_WIFI_PASSWORD";
unsigned long channelID = YOUR_CHANNEL_ID;       // e.g., 3008831
const char *writeKey = "YOUR_WRITE_API_KEY";
```

You can find your **Channel ID** and **Write API Key** in the **API Keys** tab of your ThingSpeak dashboard.

---

### 4. Open Serial Monitor

- Go to `Tools > Serial Monitor`
- Set the baud rate to `115200`
- Confirm that your device:
  - Connects to Wi-Fi
  - Reads temperature, humidity, and air quality
  - Uploads data to ThingSpeak every 20 seconds

Sample output:
```
Connecting to Wi-Fi...
Connected! IP: 192.168.1.15
Temp: 24.5°C  Humidity: 61.2%  Air Quality: 408
Upload OK
```

---

### 5. View Your Data on ThingSpeak

Visit your live dashboard:  
👉 [https://thingspeak.mathworks.com/channels/3008831](https://thingspeak.mathworks.com/channels/3008831)

Make sure your fields are labeled:
- **Field 1:** Temperature (°C)
- **Field 2:** Humidity (%)
- **Field 3:** Air Quality (Analog)

The graphs update automatically every 20 seconds with real-time data.



##  Live Dashboard
[View Real-Time Environmental Data on ThingSpeak] https://thingspeak.mathworks.com/channels/3008831 

##  Screenshots
<img width="579" height="398" alt="image" src="https://github.com/user-attachments/assets/81b1b45e-874e-4186-a8aa-e612620e1065" />
<img width="580" height="393" alt="image" src="https://github.com/user-attachments/assets/2b23ea12-9bf6-465e-b7ef-5cf947aaa517" />
<img width="577" height="393" alt="image" src="https://github.com/user-attachments/assets/8233cf2e-f6e8-48ad-83c8-a4851a0d9716" />


##  License
MIT License

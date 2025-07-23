#include <WiFiS3.h>
#include <ThingSpeak.h>
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11
#define MQ135PIN A0

DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

WiFiClient client;

unsigned long channelNumber = YOUR_CHANNEL_NUMBER;
const char* writeAPIKey = "YOUR_WRITE_API_KEY";

void setup() {
  Serial.begin(9600);
  dht.begin();

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  ThingSpeak.begin(client);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int airQuality = analogRead(MQ135PIN);

  if (!isnan(humidity) && !isnan(temperature)) {
    ThingSpeak.setField(1, temperature);
    ThingSpeak.setField(2, humidity);
    ThingSpeak.setField(3, airQuality);

    int status = ThingSpeak.writeFields(channelNumber, writeAPIKey);

    if (status == 200) {
      Serial.println("Data sent to ThingSpeak successfully.");
    } else {
      Serial.print("Failed to send data. HTTP error code: ");
      Serial.println(status);
    }
  } else {
    Serial.println("Failed to read from DHT sensor!");
  }

  delay(15000); // ThingSpeak allows updates every 15 seconds
}

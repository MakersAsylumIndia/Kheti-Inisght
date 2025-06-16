#include <WiFi.h>
#include "AdafruitIO_WiFi.h"
#include "DHT.h"

// WiFi and Adafruit IO credentials
#define WIFI_SSID       "Dhev"
#define WIFI_PASS       "12345678"
#define IO_USERNAME     "bigtugg"
#define IO_KEY          "aio_GARh60Z56rrrVOIsSd91IqzvSZ0c"

// DHT11 setup
#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Adafruit IO setup
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
AdafruitIO_Feed *temp = io.feed("Temperature");
AdafruitIO_Feed *humid = io.feed("Humidity");

void setup() {
  Serial.begin(115200);
  dht.begin();

  Serial.print("Connecting to Adafruit IO");
  io.connect();

  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("\nConnected to Adafruit IO!");
}

void loop() {
  io.run();

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" °C, Humid: ");
  Serial.print(humidity);
  Serial.println(" %");

  temp->save(temperature);
  humid->save(humidity);

  delay(15000);  // Delay to avoid Adafruit IO throttle (15 seconds)
}
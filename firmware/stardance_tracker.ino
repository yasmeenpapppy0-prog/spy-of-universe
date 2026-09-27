#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h> 
#include <Adafruit_NeoPixel.h>

// 1. Enter your hotspot parameters locally on your laptop later (Keep this hidden on GitHub!)
const char* ssid     = "ENTER_YOUR_HOTSPOT_NAME_HERE";
const char* password = "ENTER_YOUR_PRIVATE_PASSWORD_HERE";

// 2. Hardware Configuration
#define LED_PIN    23 
#define LED_COUNT   1 
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  strip.begin();
  strip.setBrightness(50);
  strip.show();

  // Connect to Hotspot
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("http://opennotify.org"); 
    int httpCode = http.GET();

    if (httpCode > 0) {
      strip.setPixelColor(0, strip.Color(0, 255, 255));
      strip.show();
    }
    http.end();
  }
  delay(10000); 
}

#include <Adafruit_NeoPixel.h>

// 1. Define the digital control pin connected to the LED DIN line
#define LED_PIN    23  // Pin 11 on your layout maps to GPIO23

// 2. Define the total number of LEDs chained together
#define LED_COUNT   1  // You have exactly 1 smart LED placed on your board

// 3. Configure the software library for your specific SK6812 component
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();           // Initialize the control pin line
  strip.setBrightness(50); // Set initial brightness (Scale: 0 to 255)
  strip.show();            // Initialize all pixels to 'off'
}

void loop() {
  // Turn LED Red
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  delay(1000); // Wait 1 second

  // Turn LED Green
  strip.setPixelColor(0, strip.Color(0, 255, 0));
  strip.show();
  delay(1000); // Wait 1 second

  // Turn LED Blue
  strip.setPixelColor(0, strip.Color(0, 0, 255));
  strip.show();
  delay(1000);
}

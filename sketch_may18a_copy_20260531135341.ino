// ESP32 Breathing LED
// Project: P4 - Smart LED Controller
// Pin 2 = Built-in LED 


const int ledPin = 2;
const int freq = 5000; const int resolution = 8;


void setup() {
  ledcAttach(ledPin, freq, resolution);
  Serial.begin(115200);
  Serial.println("Breathing LED started.");
}


void loop() {
  // Fade in
  for (int brightness = 0; brightness <= 255; brightness++) {
    ledcWrite(ledPin, brightness);
    delay(5);
  }
  // Fade out
  for (int brightness = 255; brightness >= 0; brightness--) {
    ledcWrite(ledPin, brightness);
    delay(5);
  }
}

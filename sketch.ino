#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// Configuration for the 128x64 OLED
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
#define OLED_RESET    -1 
#define DHTPIN 15     
#define DHTTYPE DHT22   

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  
  // Initialize OLED display
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("OLED allocation failed"));
    for(;;); 
  }
  
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0,0);
  display.println("SIDDUSPACE");
  display.println("Smart Home Init...");
  display.display();
  delay(2000);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Basic error handling
  if (isnan(h) || isnan(t)) {
    return;
  }

  display.clearDisplay();
  display.setCursor(0,0);
  display.setTextSize(1);
  display.println("ENVIRONMENT DATA");
  display.println("-----------------");
  
  display.setTextSize(2);
  display.setCursor(0, 25);
  display.print(t, 1); display.print("C "); 
  display.print(h, 1); display.print("%");
  
  display.display();
  delay(2000); // Wait 2 seconds between updates
}

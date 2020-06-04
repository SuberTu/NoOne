#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

int line = 32;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);

  
  display.clearDisplay(); 

}

void loop() {

  display.clearDisplay();
  
  for (line = 0; line <= 60; line += 1) {
    
    display.drawLine(0, line-30, 128, line-30, WHITE);
    display.drawLine(0, line-31, 128, line-31, BLACK);
    
    display.drawLine(0, line-20, 128, line-20, WHITE);
    display.drawLine(0, line-21, 128, line-21, BLACK);
    
    display.drawLine(0, line-10, 128, line-10, WHITE);
    display.drawLine(0, line-11, 128, line-11, BLACK);
    
    display.drawLine(0, line, 128, line, WHITE);
    display.drawLine(0, line-1, 128, line-1, BLACK);

    display.drawLine(0, line+10, 128, line+10, WHITE);
    display.drawLine(0, line+9, 128, line+9, BLACK);

    display.drawLine(0, line+20, 128, line+20, WHITE);
    display.drawLine(0, line+19, 128, line+19, BLACK);

    display.drawLine(0, line+30, 128, line+30, WHITE);
    display.drawLine(0, line+29, 128, line+29, BLACK);

    display.drawLine(0, line+40, 128, line+40, WHITE);
    display.drawLine(0, line+39, 128, line+39, BLACK);

    display.drawLine(0, line+50, 128, line+50, WHITE);
    display.drawLine(0, line+49, 128, line+49, BLACK);

    display.drawLine(44, 64, 54, 32, WHITE);
    display.drawLine(8, 64, 42, 32, WHITE);
    display.drawLine(0, 45, 30, 32, WHITE);
  
    display.drawLine(84, 64, 74, 32, WHITE);
    display.drawLine(120, 64, 86, 32, WHITE);
    display.drawLine(128, 45, 100, 32, WHITE);

    display.fillRect(0, 0, 128, 32, BLACK);
   
   display.fillCircle(64, 16, 15, WHITE);
   display.fillRect(45, 17, 45, 3, BLACK);
   display.fillRect(45, 22, 45, 2, BLACK);
   display.fillRect(45, 26, 45, 2, BLACK);
   display.fillRect(45, 29, 45, 2, BLACK);
 
   display.drawTriangle(0, 32, 10, 3, 32, 32, WHITE);
   display.drawTriangle(104, 32, 116, 2, 128, 32, WHITE);
 
   display.drawTriangle(15, 32, 26, 9, 40, 32, WHITE);
   display.drawTriangle(92, 32, 99, 12, 115, 32, WHITE);

   display.fillTriangle(1, 33, 11, 5, 31, 33, BLACK);
   display.fillTriangle(105, 33, 117, 5, 127, 33, BLACK);

   display.setTextSize(1);
   display.setCursor(26, 1);
   display.setTextColor(WHITE);
   display.println("80's");

   display.setCursor(80, 1);
   display.println("Vibe");
  
   display.drawLine(0, 32, 128, 32, WHITE);
 
   display.display();

   delay(15);

    }

  

  
}

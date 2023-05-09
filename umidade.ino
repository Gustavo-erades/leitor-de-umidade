// PARA O USO DO DISPLAY OLED
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(OLED_RESET);

int secura;
int leds[4]={5,6,7,8};
#define rele 9

void setup()
{
  pinMode(A0, INPUT);
  for(int i=5;i<=8;i++){
    pinMode(leds[i],OUTPUT);
  }
  Serial.begin(9600);
  pinMode(rele,OUTPUT);

  // PARA O USO DO DISPLAY OLED
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  Wire.begin();
}
void loop()
{
  secura = analogRead(A0);
  if(secura>830){
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(rele,LOW);

//  PARA O USO DO DISPLAY OLED
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(35,10);
    display.print("MUITO SECO");
    display.setCursor(55,20);
    display.print(secura);
    display.display();
  }
  if(500<secura && secura<830){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);

// PARA O USO DO DISPLAY OLED
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(25,10);
    display.print("POUCO MOLHADO");
    display.setCursor(55,20);
   display.print(secura);
    display.display();
  }
  if(secura<499){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(rele,HIGH);

// PARA O USO DO DISPLAY OLED
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setTextSize(1);
    display.setCursor(25,10);
    display.print("MUITO MOLHADO");
    display.setCursor(55,20);
    display.print(secura);
    display.display();
  }
  delay(5); // Delay a little bit to improve simulation performance
  Serial.println(secura);
}

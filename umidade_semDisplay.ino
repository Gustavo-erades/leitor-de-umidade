int secura;
int leds[5]={5,6,7,8};
int led_seco=10;
#define rele 9

void setup()
{
  pinMode(A0, INPUT);
  for(int i=5;i<=8;i++){
    pinMode(leds[i],OUTPUT);
  }
  pinMode(led_seco,OUTPUT);
  Serial.begin(9600);
  pinMode(rele,OUTPUT);
}
void loop()
{
  secura = analogRead(A0);
  if(secura>830){
    digitalWrite(led_seco,HIGH);
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(rele,LOW);
  }
  if(600<secura && secura<830){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(led_seco,LOW);
  }
  if(secura<599){
    digitalWrite(led_seco,LOW);
    delay(100);
    digitalWrite(leds[0],HIGH);
    delay(100);
    digitalWrite(leds[1],HIGH);
    delay(100);
    digitalWrite(leds[2],HIGH);
    delay(100);
    digitalWrite(leds[3],HIGH);
    digitalWrite(rele,HIGH);
  }
  delay(5); // Delay a little bit to improve simulation performance
  Serial.println(secura);
}
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
  }
  if(500<secura && secura<830){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1int secura;
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
  }
  if(500<secura && secura<830){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
  }
  if(secura<499){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
     digitalWrite(rele,HIGH);
  }
  delay(5); // Delay a little bit to improve simulation performance
  Serial.println(secura);
}],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
  }
  if(secura<499){
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
     digitalWrite(rele,HIGH);
  }
  delay(5); // Delay a little bit to improve simulation performance
  Serial.println(secura);
}
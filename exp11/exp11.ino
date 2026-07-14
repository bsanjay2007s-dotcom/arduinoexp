int potPin= A0;
int led1 = 9;

int brightness=0;
int potValue=0;

void setup(){
  pinMode(led1,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  potValue = analogRead(potPin);
  brightness =map(potValue,0,1023,0,255);
  analogWrite(led1,brightness);

  Serial.print("Potentiometer:");
  Serial.println(potValue);

  Serial.print("brightness");
  Serial.println(brightness);
}
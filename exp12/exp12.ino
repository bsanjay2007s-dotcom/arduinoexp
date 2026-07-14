int potPin= A0;
int led1= 9;
int relayPin= 7;

int brightness;
int potValue;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(relayPin,OUTPUT);
}

void loop(){
  potValue= analogRead(potPin);
  brightness= map(potValue,0,1023,0,255);
  analogWrite(led1,brightness);

  if(potValue>=500){
    digitalWrite(relayPin,HIGH);
  }
  else{
    digitalWrite(relayPin,LOW);
  }
}
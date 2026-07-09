int led1= 9;
int led2= 10;
int led3= 11;

int switchPin1=2;
int switchPin2=3;
int switchPin3=4;

int val1= 0;
int val2= 0;
int val3= 0;


void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(switchPin1, INPUT);
  pinMode(switchPin2,INPUT);
  pinMode(switchPin3, INPUT);

}

void loop(){
  val1= digitalRead(switchPin1);
  if(val1==HIGH)
  {
    digitalWrite(led1,HIGH);
  }
  else{
    digitalWrite(led1,LOW);
  }
  val2= digitalRead(switchPin2);
  if(val2==HIGH)
  {
    digitalWrite(led2,HIGH);
  }
  else{
    digitalWrite(led2,LOW);
  }
  val3= digitalRead(switchPin3);
  if(val3==HIGH)
  {
    digitalWrite(led3,HIGH);
  }
  else{
    digitalWrite(led3,LOW);
  }


}
int led1= 9;
int led2= 10;
int led3= 11;

int switchPin1=2;
int switchPin2=3;
int switchPin3=4;

int val1= 0;
int val2= 0;
int val3= 0;

bool led1state= 0;
bool led2state= 0;
bool led3state= 0;

bool state= 0;


void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(switchPin1, INPUT);
  pinMode(switchPin2,INPUT);
  pinMode(switchPin3, INPUT);
  Serial.begin(9600);

}

void loop(){
  val1= digitalRead(switchPin3);
  if(val1==HIGH&& state==0)
  {
    delay(10);
    if(digitalRead(switchPin3)==HIGH){
       state=1;
    led1state= !led1state;
    digitalWrite(led1,led1state);
    Serial.println("pressed");

    }
    // digitalWrite(led1,HIGH);
   

  }

  if(val1==LOW){
    state=0;
  }
  // val2= digitalRead(switchPin2);
  // if(val2==HIGH)
  // {
  //   digitalWrite(led2,HIGH);
  //   led2state= !led2state;
  // }
  // val3= digitalRead(switchPin3);
  // if(val3==HIGH)
  // {
  //   digitalWrite(led3,HIGH);
  //   led3state= !led3state;
  // }
}
#include <SoftwareSerial.h>

int led1=10;
int led2=11;


SoftwareSerial BT(6,7);

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
  BT.begin(9600);
}

void loop(){
  if(BT.available()>0){
    String data= BT.readStringUntil("\n");
    data.trim();

    if(data == "ONN1"){
      digitalWrite(led1,HIGH);
      BT.println("LED1 ONN");
    }

    else if(data == "ONN2"){
      digitalWrite(led2,HIGH);
      BT.println("LED2 ONN");
    }

    else if(data == "OFF1"){
      digitalWrite(led1,LOW);
      BT.println("LED1 OFF");
    }
    else if(data == "OFF2"){
      digitalWrite(led2,LOW);
      BT.println("LED2 OFF");
    }
  }
}
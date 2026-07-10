int led1 = 10;
int led2 = 11;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
    String data = Serial.readStringUntil('\n');
    data.trim();

    if(data == "1"){
      digitalWrite(led1,HIGH);
      Serial.println("LED ONN");
    }
    else if(data == "2"){
      digitalWrite(led2,HIGH);
      Serial.println("led onn");
    }
    else if(data == "3"){
      digitalWrite(led1,LOW);
      Serial.println("led off");
    }
    else if(data == "4"){
      digitalWrite(led2,LOW);
      Serial.println("LED OFF");
    }
  }
}
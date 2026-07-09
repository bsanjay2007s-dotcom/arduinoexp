void setup(){
  for(int i=9; i<=11;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop(){
  for(int i=9; i<=11;i++)
  {
    digitalWrite( i,HIGH);
    delay(500);
  }

  for(int i=11; i>=9; i--)
  {
    digitalWrite( i,LOW);
    delay(500);
  }
}
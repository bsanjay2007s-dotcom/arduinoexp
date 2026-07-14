void setup(){
String RMC= "$GPRMC,203522.00,A,5109.0262308,N,11401.8407342,W,0.004,133.4,130522,0.0,E,D*2B";
Serial.begin(9600);

if(RMC.startsWith("$GPRMC")){
  int commaIndex[20];
  int count =0;
  
  for(int i=0; i<RMC.length();i++){
    if(RMC[i]== ','){
      commaIndex[count++]=i;
    }
  }
  String latitude = RMC.substring(commaIndex[2] +1, commaIndex[3]);
  String longitude= RMC.substring(commaIndex[4] +1, commaIndex[5]);

  Serial.print("Latitude:");
  Serial.println(latitude);

  Serial.print("longitude");
  Serial.println(longitude);
}
}

void loop(){
  
}

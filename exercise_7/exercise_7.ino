int REDLED = 5;
int BLUELED = 10;
int SENSOR = 12;
int MOTION;


void setup() {
  pinMode(REDLED,OUTPUT);
  pinMode(BLUELED,OUTPUT);
  pinMode(SENSOR,INPUT);
  

}

void loop() {
  for(int j=1; j<=10; j=j+1);
  MOTION = digitalRead(SENSOR);
  if(MOTION ==HIGH){
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }
  else{
       digitalWrite(BLUELED,HIGH);
       delay(1000);
       digitalWrite(BLUELED,HIGH);
       delay(1000);
  }
 

}

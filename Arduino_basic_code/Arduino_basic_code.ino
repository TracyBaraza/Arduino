int redled=4;
int blueled=2;




void setup() {
   pinMode (redled,OUTPUT);
   pinMode (blueled,OUTPUT);
  

}

void loop() {
  digitalWrite(redled,HIGH);
  delay(1000);
  digitalWrite(redled,LOW);
  delay(1000);

  digitalWrite(blueled,HIGH);
  delay(1000);
  digitalWrite(blueled,LOW);
  delay(1000);
  

}

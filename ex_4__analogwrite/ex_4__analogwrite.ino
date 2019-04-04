int pinpot=A0;




void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  

}

void loop() {
  int ReadValue;
  ReadValue= analogRead(pinpot);
  Serial.println(ReadValue);
  delay(1000);
  

}

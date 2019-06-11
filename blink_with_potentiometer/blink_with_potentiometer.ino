int REDLED=5;
int pinpot=A0;
int inputValue=0;



void setup() {
  pinMode(REDLED,OUTPUT);
  pinMode(pinpot,INPUT);

}

void loop() {
  inputValue=analogRead(pinpot);
  digitalWrite(REDLED,HIGH);
  delay(inputValue);

  digitalWrite(REDLED,LOW);
  delay(inputValue);

}

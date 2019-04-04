int REDLED=5;


void setup() {
   pinMode (REDLED,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(REDLED,1);
  delay(1000);
  analogWrite(REDLED,0);
  delay(1000);
  // put your main code here, to run repeatedly:

}

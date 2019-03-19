int REDLED=4;
int GREENLED=2;



void setup() {
  pinMode (REDLED,OUTPUT);
  pinMode (GREENLED,OUTPUT);

}

void loop() {
 
 digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  
  digitalWrite (REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);

  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);

  digitalWrite(GREENLED,HIGH);
  delay(1000);
  digitalWrite(GREENLED,LOW);
  delay(1000);

  digitalWrite(GREENLED,HIGH);
  delay(1000);
  digitalWrite(GREENLED,LOW);
  delay(1000);
}

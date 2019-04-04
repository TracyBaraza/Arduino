int REDLED=4;
int GREENLED=2;
int blinknumberREDLED=5;
int blinknumberGREENLED=6;


void setup() {
 Serial.begin(9600);
  pinMode (REDLED,OUTPUT);
  pinMode (GREENLED,OUTPUT);
 Serial.print("This is my first program");
 Serial.println(" ");
}

void loop() {
 
  for(int j=1; j<=blinknumberREDLED; j=j+1)
   
  {
    Serial.print(j);
    Serial.print(" Blinking LED is RED #1");
   Serial.println("REDLED blinking");
 
 Serial.println(" ");
 Serial.println("REDLED is Blinking"); Serial.println(" ");1;
 Serial.println("REDLED is Blinking"); Serial.println(" ");2;
 Serial.println("REDLED is Blinking"); Serial.println(" ");3;
 Serial.println("REDLED is Blinking"); Serial.println(" ");4;
 Serial.println("REDLED is Blinking"); Serial.println(" ");5;
 digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }



 
 
 
for(int j=1; j<=blinknumberGREENLED; j=j+1)


{
  Serial.println(j);
    Serial.print(" Blinking LED is GREEN #2");
 
Serial.println("GREENLED blinking");
  digitalWrite(GREENLED,HIGH);
  delay(1000);
  digitalWrite(GREENLED,LOW);
  delay(1000);
  }

 
}

int motion;
int BLUELED=5;
int REDLED=6;
int pir=12;





void setup() {
  
  pinMode(BLUELED, OUTPUT);
  pinMode(REDLED,OUTPUT);
  pinMode(pir,INPUT);
  

}

void loop() {
 for(int j=1; j<=blinknumberREDLED; j=j+1)
{
 motion=digitalRead (pir);
  if(motion==HIGH){
       digitalWrite(REDLED,HIGH);
        delay(1000);
       digitalWrite(REDLED,LOW);
       delay(1000);
  }
  else{
       digitalWrite(BLUELED,HIGH);
       delay(1000);
        digitalWrite(BLUELED,LOW);
       delay(1000);
}

}

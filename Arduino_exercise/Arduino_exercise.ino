int REDLED=4;
int GREENLED=2;
int blinknumberREDLED=5;
int blinknumberGREENLED=6;


void setup() 

             {  
               Serial.begin(9600);
               pinMode (REDLED,OUTPUT);
               pinMode (GREENLED,OUTPUT);
               Serial.println("This is my first program");
               Serial.println(" ");
              } 

void loop() 
             {
              for(int j=1; j<=blinknumberREDLED; j=j+1)
             {
    
              Serial.print(" Blinking LED is RED # ");
              Serial.println(j);
              digitalWrite(REDLED,HIGH);
              delay(1000);
              digitalWrite(REDLED,LOW);
              delay(1000);
 
             }
              Serial.println(" ");

 
             for(int j=1; j<=blinknumberGREENLED; j=j+1)
            {

            
              Serial.print(" Blinking LED is GREEN # ");
              Serial.println(j);
              digitalWrite(GREENLED,HIGH);
              delay(1000);
              digitalWrite(GREENLED,LOW);
              delay(1000);
            }
              
              Serial.println(" ");
 

 
 
           }



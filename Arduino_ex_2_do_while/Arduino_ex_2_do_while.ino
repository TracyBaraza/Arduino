int REDLED=4;
int GREENLED=2;
int blinknumberREDLED;
int blinknumberGREENLED;
int REDtimeon;
int GREENLEDtimeon;
int REDtimeoff;
int GREENLEDtimeoff;

void setup() 

             {  
               Serial.begin(9600);
               pinMode (REDLED,OUTPUT);
               pinMode (GREENLED,OUTPUT);
               Serial.println("This is my first program");
               Serial.println(" ");

               Serial.print("How many RED Blinks");
               Serial.println(" ");
               while(Serial.available()==0){};
               blinknumberREDLED=Serial.parseInt();

               Serial.println("How many Green Blinks ?");
               Serial.println(" ");
               while(Serial.available()==0){};
               blinknumberGREENLED=Serial.parseInt();

               
               Serial.println("How long REDLED on ?");
               Serial.println(" ");
               while(Serial.available()==0){};
               REDtimeon=Serial.parseInt();

                Serial.println("How long GREENLED on ?");
               Serial.println(" ");
               while(Serial.available()==0){};
               GREENLEDtimeon=Serial.parseInt();

                  Serial.println("How long REDLED off ?");
               Serial.println(" ");
               while(Serial.available()==0){};
               REDtimeoff=Serial.parseInt();

                  Serial.println("How long GREENLED off ?");
               Serial.println(" ");
               while(Serial.available()==0){};
               GREENLEDtimeoff=Serial.parseInt();

               

               
              } 

void loop() 
             {
              for(int j=1; j<=blinknumberREDLED; j=j+1)
             {
    
              Serial.print(" Blinking LED is RED # ");
              Serial.println(j);
              digitalWrite(REDLED,HIGH);
              delay(REDtimeon);
              digitalWrite(REDLED,LOW);
              delay(REDtimeoff);
 
             }
              Serial.println(" ");

 
             for(int j=1; j<=blinknumberGREENLED; j=j+1)
            {

            
              Serial.print(" Blinking LED is GREEN # ");
              Serial.println(j);
              digitalWrite(GREENLED,HIGH);
              delay(GREENLEDtimeon);
              digitalWrite(GREENLED,LOW);
              delay(GREENLEDtimeoff);
            }
              
              Serial.println(" ");
 

 
 
           }



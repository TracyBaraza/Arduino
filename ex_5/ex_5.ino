int pinpot=A0;
int REDLED=5;
int ReadValue;
float WriteValue;
float voltage;




void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(REDLED,OUTPUT);
  
  }

void loop() {
  ReadValue= analogRead(pinpot);
  WriteValue=(255./1023.)*ReadValue;
  voltage=(5./1023.)*ReadValue
  analogWrite(REDLED,WriteValue);
  delay(1000);
  Serial.print(" tpinValue ");
  Serial.print(ReadValue);
  Serial.print(" ");
  Serial.print("Mapped value");
  Serial.print(" ");
  Serial.print(writeValue);
  Serial.print(" ");
  Serial.print("voltage value");
  Serial.print(" ");
  Serial.println(voltage);
  delay(5000);
  
 }

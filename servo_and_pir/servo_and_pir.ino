   

#include <Servo.h>



Servo mydevice;
int ReadValue;
int PIR=10;

void setup() {
  mydevice.attach(8);
  pinMode(PIR,INPUT);
  

}

void loop() {
ReadValue=digitalRead(PIR);
if (ReadValue ==HIGH) {
    mydevice.write(90);
    delay(1000);
  }
else{
  mydevice.write(0);
  delay(1000);
}
}

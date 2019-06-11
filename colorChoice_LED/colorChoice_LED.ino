int redPin=11;
int greenPin=10;
int bluePin=6;
int brightness=255;
String colorChoice;


void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
 
}

void loop() {
  Serial.println("What color would youlike the LED?(redPin,greenPin,bluePin)");
  while(Serial.available()==0){}
  colorChoice =Serial.readString();

  if (colorChoice=="red"){
    analogWrite(redPin,brightness);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    
    }

  if (colorChoice=="blue"){
    analogWrite(bluePin,brightness);
    analogWrite(greenPin,0);
    analogWrite(redPin,0);
    
    }

  if (colorChoice=="green"){
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,0);
    analogWrite(redPin,0);
    
    }

 if (colorChoice=="purple"){
    analogWrite(greenPin,0);
    analogWrite(bluePin,brightness);
    analogWrite(redPin,brightness);
    
    }

 if (colorChoice=="yellow"){
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,0);
    analogWrite(redPin,brightness);
    
    }
 if (colorChoice=="cyan"){
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,brightness);
    analogWrite(redPin,0);
    
    }

if (colorChoice=="caro"){
    analogWrite(greenPin,brightness);
    analogWrite(bluePin,brightness);
    analogWrite(redPin,brightness);
    
    }

    

  if(colorChoice!="red" && colorChoice!="green" && colorChoice!="blue"){
    Serial.println("That is not a valid color choice,please try again");
    Serial.println("");

        
    }

}














int xPin = A1;    // pins for joystick pot
int yPin = A2;    

//Variable to store the position
int xVal;
int yVal;

//Outputs
int xUpPin = 13;
int xDownPin = 7;
int yUpPin = 8;
int yDownPin = 9;

//Setup
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(xUpPin,OUTPUT);
  pinMode(xDownPin,OUTPUT);
  pinMode(yUpPin,OUTPUT);
  pinMode(yDownPin,OUTPUT);
}


//Main loop
void loop() {

  xVal=analogRead(xPin);
  yVal=analogRead(yPin);


//The x axis
  //Input is up
  if (xVal > 600){
    digitalWrite(xUpPin, HIGH);
    digitalWrite(xDownPin, LOW);
    //Input is down
    }else if( xVal < 400){
      digitalWrite(xUpPin,LOW);
      digitalWrite(xDownPin, HIGH);
      }
      //Input is middle
      else{
        digitalWrite(xUpPin, LOW);
        digitalWrite(xDownPin, LOW);
        }




//The y ayis
  //Input is up
  if (yVal > 600){
    digitalWrite(yUpPin, HIGH);
    digitalWrite(yDownPin, LOW);
    //Input is down
    }else if( yVal < 400){
      digitalWrite(yUpPin,LOW);
      digitalWrite(yDownPin, HIGH);
      }
      //Input is middle
      else{
        digitalWrite(yUpPin, LOW);
        digitalWrite(yDownPin, LOW);
        }
}

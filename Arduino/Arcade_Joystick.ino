/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This eyample code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

int xPin = A1;    // select the input pin for the potentiometer
int yPin = A2;    

int xVal;
int yVal;


int xUpPin = 13;
int xDownPin = 7;
int yUpPin = 8;
int yDownPin = 9;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(xUpPin,OUTPUT);
  pinMode(xDownPin,OUTPUT);
  pinMode(yUpPin,OUTPUT);
  pinMode(yDownPin,OUTPUT);
}



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

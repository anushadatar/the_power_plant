// Cassandra Overney and Anusha Datar 
// iSim final project arduino code
#include <Servo.h> 

Servo motor;
int waterLED = 9;
int soilPin = A0;
int photoPin = A1;
int waterSound = 5;
int lightSound = 6;
int lightLED = 10;
int sensorMin = 0;
int sensorMax = 0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(waterLED, OUTPUT);
  pinMode(lightLED, OUTPUT);
  pinMode(waterSound, OUTPUT);
  pinMode(lightSound, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0 to get the voltage from the soil moisture sensor.
  
 ///////////////////////////////////////////////////////////////////////////////////////////////////////// SOIL MOISTURE //////////////////////////////////////////////////////////////////////////////////////////
 int moistureRead = analogRead(soilPin);
///// DEBUG FUNCTIONS ////////
 //Serial.println("The moisture sensor reading is: ");
 //Serial.println(moistureRead);
 
 //Only take the valid values
  if (moistureRead < 900) {
    if (moistureRead < 100) {
      digitalWrite(waterLED, HIGH);
      digitalWrite(waterSound, HIGH);
      delay(100);
      Serial.println("Water this plant");  } 
  digitalWrite(waterSound, HIGH);    
  digitalWrite(waterLED, LOW);
}
 ///////////////////////////////////////////////////////////////////////////////////////////////////////// LIGHTING  ///////////////////////////////////////////////////////////////////////////////////////////////
  int photoRead = analogRead(photoPin);
   ///// DEBUG FUNCTIONS ////////
  // Serial.println("The photodiode reading is: ");
  // Serial.println(photoRead);
  if(photoRead < 150) {
    digitalWrite(lightLED, HIGH);
    digitalWrite(lightSound, HIGH);
    Serial.println("Brighten this plant's day!");
  }
  digitalWrite(lightSound, HIGH);    
  digitalWrite(lightLED, LOW);

 


}


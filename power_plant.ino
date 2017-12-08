// Cassandra Overney and Anusha Datar 
// iSim final project arduino code
#include <Servo.h> 

Servo motor;
int servoPin = 9;
int soilPin = A0;
int photoPin = A1;
int sensorMin = 0;
int sensorMax = 0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  motor.attach(servoPin);

  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0 to get the voltage from the soil moisture sensor.
  
 ///////////////////////////////////////////////////////////////////////////////////////////////////////// READ AND PRINT SOIL MOISTURE //////////////////////////////////////////////////////////////////////////////////////////
 int moistureRead = analogRead(soilPin);
 Serial.println("The moisture sensor reading is: ");
 Serial.println(moistureRead);
 // Only take the lower values. Threshold is 100. Don't ask...
 if (moistureRead < 900) {
  if (moistureRead < 100) {
    Serial.println("Water this plant");  } }

 ///////////////////////////////////////////////////////////////////////////////////////////////////////// READ AND PRINT LIGHTING  ///////////////////////////////////////////////////////////////////////////////////////////////
  int photoRead = analogRead(photoPin);
  if(photoRead < 200) {
    Serial.println("Brighten this plant's day!");
  }
  Serial.println("The photodiode reading is: ");
  Serial.println(photoRead);

  
  ///////////////////////////////////////////////////////////////////////////////////////////////////////// MOVE THE MOTRO /////////////////////////////////////////////////////////////////////////////////////////////////////////
  motor.write(90);
  delay(1000);
  motor.write(-90);
  delay(1000);


}


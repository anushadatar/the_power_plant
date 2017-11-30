// Cassandra Overney and Anusha Datar 
// iSim final project arduino code

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0 to get the voltage from the soil moisture sensor.
  int sensorValue = analogRead(A0);
  // print out the value you read: 
  // TODO add peak finding, wenner sensor calculations, voltage divider calculations.
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  // TODO If the resistivity is above some threshold (determined via calibration curve) turn on LED and move motor
  // TODO Analog read from the photodiode
  // TODO If the photodiode is above some threshold, turn on LED and send a text
}

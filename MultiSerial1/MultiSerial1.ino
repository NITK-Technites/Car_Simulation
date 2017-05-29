
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  sensorValue = analogRead(sensorPin);

  // read from port 0, send to port 1:
  //if (Serial.available()) {
   // int inByte = Serial.read();
    if(sensorValue>505)
    Serial.write('l');
    else
    Serial.write('r');
    
    Serial.println();
    delay(500);
  //}
}

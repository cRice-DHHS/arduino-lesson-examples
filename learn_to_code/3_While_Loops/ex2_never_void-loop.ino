int ledPin = 13;
void setup() {	// the setup function runs once
  pinMode(ledPin, OUTPUT);
  while(true){
    digitalWrite(ledPin, HIGH); //5V output on pin 13
    delay(1000);                //wait one second
    digitalWrite(ledPin, LOW);  //0V output on pin 13
    delay(1000);                //wait one second
  }
}
void loop() {  //ignore the 'void loop()' for this one...
  delay(1000); //ignore this...
}              //ignore this...
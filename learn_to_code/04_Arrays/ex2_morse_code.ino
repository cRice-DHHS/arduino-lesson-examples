int ledPin = 13;
void setup() {	// the setup function runs once
  pinMode(ledPin, OUTPUT);
}
              //morse code for the letters “A.I.”
int times[] = {250,80,750,80,250,80,250,2000};  
void loop() {  // will run forever, while there is power
    digitalWrite(ledPin, HIGH); //5V output on pin 13
    delay(times[0]);                //wait some time
    digitalWrite(ledPin, LOW);  //0V output on pin 13
    delay(times[1]);                //wait some time
    digitalWrite(ledPin, HIGH); //5V output on pin 13
    delay(times[2]);                //wait some time
    digitalWrite(ledPin, LOW);  //0V output on pin 13
    delay(times[3]);                //wait some time
    digitalWrite(ledPin, HIGH); //5V output on pin 13
    delay(times[4]);                //wait some time
    digitalWrite(ledPin, LOW);  //0V output on pin 13
    delay(times[5]);                //wait some time
    digitalWrite(ledPin, HIGH); //5V output on pin 13
    delay(times[6]);                //wait some time
    digitalWrite(ledPin, LOW);  //0V output on pin 13
    delay(times[7]);                //wait some time
}

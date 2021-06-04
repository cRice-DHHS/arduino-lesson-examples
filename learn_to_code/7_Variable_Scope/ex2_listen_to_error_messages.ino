void setup() {	// the setup function runs once
  int ledPin = 13;
  pinMode(ledPin, OUTPUT);
}             //morse code for the letters “A.I.”
int times[] = {250,80,750,80,250,80,250,2000};
Bool ledState;  
void loop() {  // will run forever, while there is power
  for(x = 0; x < 8; x++){   
    digitalWrite(ledPin, ledState); // output on pin 13
    ledState = !ledState; //change ledState so it will flip
    delay(times[x]);      //wait some time from the array
  }
}

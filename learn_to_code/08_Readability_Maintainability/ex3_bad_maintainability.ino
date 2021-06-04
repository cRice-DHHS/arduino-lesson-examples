void setup() {	// the setup function runs once
  pinMode(13, OUTPUT); //put pin 13 in output mode
}
void loop() {  //loop runs continuously after setup
  digitalWrite(13, HIGH); //5V output on pin 13
  delay(1000);                //wait one second
  digitalWrite(13, LOW);  //0V output on pin 13
  delay(1000);                //wait one second
}

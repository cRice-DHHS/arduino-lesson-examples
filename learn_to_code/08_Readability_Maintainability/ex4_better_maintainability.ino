int LED = 13; //variable to hold LED address
 
void setup() {	// the setup function runs once
  pinMode(LED, OUTPUT); //put LED pin in output mode
}
void loop() {  //loop runs continuously after setup
  digitalWrite(LED, HIGH); //5V output on LED pin
  delay(1000);                //wait one second
  digitalWrite(LED, LOW);  //0V output on LED pin
  delay(1000);                //wait one second
}

void setup() {  // the setup function runs once
  Serial.begin(9600); // open serial communication
}
void loop() {   // the setup function runs repeatedly
  myFunction(); // call the function to run here
  delay(500);   // wait a half second
}
void myFunction (){ // function only runs when called
  Serial.println("Function Called!");
  delay(500);   // wait a half second  
}

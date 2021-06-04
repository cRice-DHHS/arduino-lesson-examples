bool a = true;  //global variable called ‘a’ to store the variable
 
void setup() {
  Serial.begin(9600); // communication speed of 9600 baud
  if(a){    //evaluate if the variable ‘a’ is true
    Serial.println("I like cookies."); // do this if ‘a’ is true
  }
}
 
void loop() {	   // the loop isn’t doing anything in this program
  Serial.println("kittens...");
  delay (1000);      // wait for one second before looping
}

/*  A basic boolean example, that will show some basic logic use.   */
 
bool a = true;  //global variable called ‘a’ to store the first variable
bool b = false; //global variable called ‘b’ to store the second variable
 
void setup() {
  Serial.begin(9600); // communication speed of 9600 baud
  if(a && b){    // returns ‘true’ if both a and b are true values
    Serial.println("I like cookies."); // do this when if() returns ‘true’
  }else{    //else{ defines what happens when if() returns ‘false’
    Serial.println("Always hungry..."); // do this when if() returns ‘false’
  }
}
 
void loop() {
  delay (1000);      // wait for one second before looping
}

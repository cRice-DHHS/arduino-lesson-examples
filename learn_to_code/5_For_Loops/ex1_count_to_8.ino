void setup() {    // the setup function runs once
  Serial.begin(9600); // open serial communication
  for(int i = 1; i < 8; i++){ //this is a complex line
//the for loop is started, with the conditions in ()
//an int variable called ‘i’ is made with a value 1
//the for loop will run until i<8 is not true
//the i++ means i will get bigger by one every loop  
    Serial.print("Going through the loop, time #");
    Serial.println(i);
    delay(1000);  
  }
}
void loop() {  //ignore the 'void loop()' for this one...
  delay(1000); //ignore this...
}              //ignore this...
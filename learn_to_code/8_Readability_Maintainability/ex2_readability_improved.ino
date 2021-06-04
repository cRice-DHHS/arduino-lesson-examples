// global variables
int x = 2;
int y = 3;
 
void setup() { //setup function runs once at startup
Serial.begin(9600); //start serial communication 
int sum = addition(x,y); //using a variable for clarity
Serial.println(sum); // send the sum (result of addition fn)
}
 
void loop() { //loop runs continuously after startup
	//loop function is intentionally left empty
} 
 
//user defined function (used in the setup fn above)
int addition(int a, int b){ //add the two given values
return a+b;  //return the sum of the values passed into the fn
}

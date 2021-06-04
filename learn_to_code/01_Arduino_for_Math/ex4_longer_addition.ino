long a = 32,765; //global variable called ‘a’ to store first input
long b = 5;  //global variable called ‘b’ to store second input
 
void setup(){  //this will run only once
  Serial.begin(9600); //start and set-up serial communication
  long c; //declare a variable called ‘c’ without a value
  c = a + b; //this is where the math happens << edit this line
  Serial.println(c); //return the output over serial 
}
 
void loop(){ //you can totally ignore this, but it must be here
}

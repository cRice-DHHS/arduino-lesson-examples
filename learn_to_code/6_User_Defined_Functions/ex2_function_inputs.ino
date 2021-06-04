void setup() {  // the setup function runs once
  Serial.begin(9600);
}
int x = 0;      // create a global variable called 'x'
void loop() {   // the setup function runs repeatedly
  tattle(x);    // call the function with input 'x'
  delay(2000);  // wait 2 seconds
  x = x + 1;    // increase the value of x by 1
}
void tattle (int L){ // function only runs when called
  Serial.print(L);   //serial print the input
  Serial.println(" was input to custom function.");
}

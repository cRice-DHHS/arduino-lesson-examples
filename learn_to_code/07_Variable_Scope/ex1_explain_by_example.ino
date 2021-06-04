int x = 2; //A 'global' variable that can be used anywhere
int y = 3; //A 'global' variable that can be used anywhere
void setup() {  // the setup function runs once
  Serial.begin(9600);  
  Serial.print(add(x,y));
  Serial.print(" is the sum");
  Serial.print(multiply(x,y));
  Serial.print(" is the product");
}
void loop() {   // the setup function runs repeatedly
  long w = 5000000; //'w' can only be used in 'loop()'
  delay(w);
}
int add (int a, int b){ //’a’ & ‘b’ can only be used in ‘add()’
  int c = a + b; //this 'c' can only be used in 'add()'
  return c;
}
long multiply (int a, float b){ // same as above...
  long c = a * b; //this 'c' can only be used in 'multiply()'
  return c;
} // the 'c' in 'add()' and 'multiply()' are not in conflict
  // because they have restricted scope that does not overlap

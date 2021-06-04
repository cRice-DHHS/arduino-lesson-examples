void setup() {  // the setup function runs once
  Serial.begin(9600);
}
int x = 2;      // create a global variable called 'x'
int y = 3;      // create a global variable called 'y'
void loop() {   // the setup function runs repeatedly
  Serial.print(add(x,y));
  Serial.print(" is the sum");
  Serial.print(multiply(x,y));
  Serial.print(" is the product");
  int f = add(x,y);
  Serial.print(multiply(f,y));
  Serial.print(" is the new product");
  while(true){
  }
}
int add (int a, int b){ // function returns type ‘int’
  int c = a + b;
  return c;
}
long multiply (int a, float b){ // function is type ‘long’
  long c = a * b;
  return c;
}

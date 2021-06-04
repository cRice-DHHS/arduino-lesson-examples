class Thinggy{  //the keyword ‘class’ tells Arduino you want OOP
  int favNum;       //any variables, scoped for the whole class
  public:     //anything below this are functions of the OOP
  Thinggy(int num){ //the constructor: same name as class 
    favNum = num;   //any startup operations can happen here
  }
  void setFavNumber(int x){ //a ‘setter’ function or method
    favNum = x;   //this function sets the value of favNum
  }
  int getFavNumber(){  //a ‘getter’ function or method
    return favNum;  //this function returns the value of favNum
  }
}; // end of OOP instructions
//================= Program starts here =======================
Thinggy num1(7);  // construct a ‘Thinggy’ named ‘num1’
//^instantiation     pass in the value 12 to Thinggy ‘num1’
void setup(){     // void setup happens after constructor
  Serial.begin(9600); // because you can’t do this within a class
}
long p = 0;   // a global variable for ‘void loop()’
void loop(){
  Serial.print("Your Favorite Number is: ");
  Serial.println(num1.getFavNumber()); //use the ‘getter’ func
  delay(1000);
  p = p + 1;
  if((p%10)==3){
    num1.setFavNumber(p);  //use the ‘setter’ function
    // see how similar this is to the syntax of ‘Serial.print()’?
    Serial.print("Your new Favorite Number is: ");
    Serial.println(num1.getFavNumber());  // use the ‘getter’
  }
}

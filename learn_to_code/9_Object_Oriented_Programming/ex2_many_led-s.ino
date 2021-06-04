class Blinker{
  int ledPin;       //member variables to be used in the class
  long waitTime;    //these are declared, but not given values
  unsigned long previousMillis;
  bool pinOnOff;    // the values will come in the constructor
  public:
  Blinker(int num, long wait){ //this is the constructor
    ledPin = num;  //set the member variable value
    waitTime = wait; //set the member variable value
    pinMode(ledPin, OUTPUT); //set up the pin as an output
    previousMillis = millis(); //needed for tracking time
    pinOnOff = true; //start with the LED turned on
    digitalWrite(ledPin, pinOnOff); //turn the LED on to start
  }
  void blinkit(){
    if((millis()-previousMillis)>=waitTime){ //if enough time...
      previousMillis = millis(); //reset the timer/counter
      pinOnOff = !pinOnOff; //change the value of the LED output
      digitalWrite(ledPin, pinOnOff); //change the LED
    } //end if logic 
  } //end blinkit() function
}; // end class declaration
 
Blinker light1(3,1000); //constructor #1
Blinker light2(4,910);  //constructor #2
Blinker light3(5,130);  //each constructor takes 2 inputs
Blinker light4(6,340);    //first input is the pin#
Blinker light5(7,1520);   //second input is the blink delay
 
void setup(){ // don’t need to do anything here...
}             // but Arduino requires it in a program
 
void loop(){
  light1.blinkit();  //call the blinkit method on light1 object
  light2.blinkit();  //call the blinkit method on light2 object
  light3.blinkit();  //call the blinkit method on light3 object
  light4.blinkit();  //call the blinkit method on light4 object
  light5.blinkit();  //call the blinkit method on light5 object
}

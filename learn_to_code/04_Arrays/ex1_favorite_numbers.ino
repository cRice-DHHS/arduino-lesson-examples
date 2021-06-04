void setup() {      // the setup function runs once
  Serial.begin(9600);
  int favoriteNumbers[] = {1, 6, 14, 32, 64}; 
  Serial.println(favoriteNumbers[0]);  //print text
  Serial.println(favoriteNumbers[1]);  //print text
  Serial.println(favoriteNumbers[2]);  //print text
  Serial.println(favoriteNumbers[3]);  //print text
  Serial.println(favoriteNumbers[4]);  //print text
  Serial.println("Reassigning ‘64’");  //print text
  favoriteNumbers[4] = 11;   //reassigning array location 4
  Serial.println(favoriteNumbers[4]);  //print text
}
void loop() {  //ignore the 'void loop()' for this one...
  delay(1000); //ignore this...
}              //ignore this...

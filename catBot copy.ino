int leftWhisker = 7;
#include <Servo.h>  
int rightWhisker = 5;
int button = 13;
int piezo = 4;
int green = 9;
int red = 10;

Servo servoLeft;                         
Servo servoRight;

void setup() {
  //setsup the window that displays printed updates. 
  Serial.begin(9600); //Opens port 9600

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  // Declares the two digital pin numbers as input
  pinMode(leftWhisker, INPUT); 
  pinMode(rightWhisker, INPUT);
  pinMode(button, INPUT);
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500);        // Calibrate left servo
  servoRight.writeMicroseconds(1500); 
}

void backwards(){
  // forward
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);

}
void forwards(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
}

void left(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1000);
}

void right(){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(1000);
}


void loop() {

  //gives back a 0 or a 1 depending on the input. 0 is touching nothing
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);
  int buttonValue = digitalRead(button);

//    //Prints the value just to see if it works
//    Serial.print("Left:" );  
//    Serial.print(leftWhiskerValue);
//
//    Serial.print("Right:" );
//    Serial.print(rightWhiskerValue);

//HIGH is another way to write 1 and ON and TRUE
//LOW also is 0 and OFF and FALSE
//  if (buttonValue == 0){
//    Serial.print("button pressed");
  
//  digitalWrite(red, LOW);
  if (leftWhiskerValue == LOW && rightWhiskerValue == LOW){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    delay(300);
    tone(piezo, 405);
    delay(300);
    tone(piezo, 300);
    delay(300);
    digitalWrite(red, LOW);
    noTone(piezo);
    forwards();
    right();
    
  }else if(leftWhiskerValue == LOW){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    Serial.println("Left whisker sensed");
    tone(piezo, 405);
    delay(300);
    tone(piezo, 300);
    delay(300);
    noTone(piezo);
    digitalWrite(red, LOW);
    forwards();
    right();
    
  }else if (rightWhiskerValue == LOW){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    Serial.println("Right whisker sensed");
    tone(piezo, 405);
    delay(300);
    digitalWrite(red, LOW);
    tone(piezo, 300);
    delay(300);
    noTone(piezo);
    forwards();
    left();
    
  }else{
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    backwards(); 
  }

  delay(1000);
}




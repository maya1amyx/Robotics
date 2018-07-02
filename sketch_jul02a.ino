//First Robotics things with LEDs

int purple = 9; //Make sure your circuit is suing digital pin 13
int red = 13;
int yellow = 12;
int green = 11;
int blue = 10;

void dot(){
  digitalWrite(purple, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  delay(200);
  digitalWrite(purple, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  
}

void dash(){
  digitalWrite(purple, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  delay(600);
  digitalWrite(purple, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(purple,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);




}

void loop() {
  // put your main code here, to run repeatedly:
  dot();
  delay(400);
  dot();
  delay(400);
  dash();
  delay(400);
  dot();   //F
  delay(1000);
  dot();   //E
  delay(1000);
  dash();
  delay(400);
  dash();  //M
  delay(1000);
  dot();   
  delay(400);
  dot();   //I
  delay(1000);
  dash();  
  delay(400);
  dot();   //N
  delay(1000);
  dot();   
  delay(400);
  dot();   //I
  delay(1000);
  dot();   
  delay(400);
  dot();  
  delay(400);
  dot();   //S
  delay(1000);
  dash();
  delay(400);
  dash();  //M
  delay(2000);
  
}

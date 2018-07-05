int purple = 9; //Make sure your circuit is suing digital pin 13
int red = 13;
int yellow = 12;
int green = 11;
int blue = 10;

void flash(int light){
  digitalWrite(light, HIGH);
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
  flash(red);
  delay(200);
  
  flash(yellow);
  delay(200);
  
  flash(green);
  delay(200);
  
  flash(blue);
  delay(200);
  
  flash(purple);
  delay(200);
  flash(red);
  delay(200);
  flash(red);
  delay(200);
}

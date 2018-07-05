
int PIEZO = A0;
int sensorReading = 0;
int threshold = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  sensorReading = analogRead(PIEZO);

  Serial.println(sensorReading);

  if (sensorReading <= threshold){
    Serial.println("knock");
    delay(1000);
  }

  delay (200);
}

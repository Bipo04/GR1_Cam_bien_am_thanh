#define soundSensor 2   

void setup() {
  pinMode(soundSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int soundState = digitalRead(soundSensor);

  if (soundState == LOW) {  
    Serial.println("Có tiếng động!");
  } else {
    Serial.println("Không có tiếng động!"); 
  }
  
  delay(200);
}
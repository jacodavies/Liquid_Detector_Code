/*
 * This code is meant to be used with a soil moisture sensor
 * 
 * I made a YouTube video about this project on my channel Lunar Lightshow Productions
 * Check it out LINK
 */

const int sensorpin = A0;

int Ready = 1;

void setup() {
  Serial.begin(9600);
  pinMode(sensorpin, INPUT);
}

void loop() {
  int Ready2 = Ready;
  
  int sensorValue = analogRead(sensorpin);
  
  if (sensorValue > 700) {
    action();
    Ready = 1;
  } else {
    Serial.print("Wait");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.print(".");
    delay(750);
    Serial.println(".");
    delay(750);
    Ready = 0;
  }
  while (Ready2 != Ready) {
    
    action();
    
    int sensorValue = analogRead(sensorpin);
 
    if (sensorValue > 700) {
      Ready = 1;
    }
  }
}

void action() {
  
  int sensorValue = analogRead(sensorpin);
  
  if (sensorValue > 700) {
    
    Serial.println("Nothing");
    
  } else if (sensorValue < 10) {

    Serial.println("Short-Circuit");

  } else if(sensorValue>200 && sensorValue<701) {

    Serial.println("Water");
    
  } else if (sensorValue>110 && sensorValue<140) {

    Serial.println("Apple Juice");
    
  } else if (sensorValue>70 && sensorValue<111) {

    Serial.println("Crannberry Juice");
    
  } else if (sensorValue>139 && sensorValue<201) {

    Serial.println("Pineapple Juice");
    
  }
  
 delay(100);
}

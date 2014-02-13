#include <Servo.h>

Servo charlie;

int pos;

void setup() {
 pinMode(11, OUTPUT);
 digitalWrite (11, HIGH);
  charlie.attach(9); 
  
}

void loop() {
  
 charlie.write(0);
 delay(500); 
 charlie.write(89);
 delay(500);
 digitalWrite(11, LOW);
 delay(5000);
 digitalWrite(11, HIGH);
 charlie.write(180);
 delay(10000);
  
}

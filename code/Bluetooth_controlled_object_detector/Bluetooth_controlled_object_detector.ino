#include <AFMotor.h>
AF_DCMotor right_motor(1, MOTOR12_8KHZ);
AF_DCMotor left_motor(2, MOTOR12_8KHZ);

int const trigPin = 12;
int const echoPin = 13;
int const buzzPin = 2;

String readString;

void setup() {
  Serial.begin(9600);
  right_motor.setSpeed(250);
  left_motor.setSpeed(250);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  while(Serial.available()){
    delay(50);
    char c=Serial.read();
    readString+=c;
  }
  if(readString.length()>0){
    Serial.println(readString);
    if (readString =="BACKWARD"){
      right_motor.run (FORWARD);
      left_motor.run (FORWARD);
      delay(500);
    }
    if (readString =="FORWARD"){
      right_motor.run (BACKWARD);
      left_motor.run (BACKWARD);
      delay(500);
    }
    if (readString =="LEFT"){
      right_motor.run (FORWARD);
      left_motor.run (BACKWARD);
      delay(500);
    }
    if (readString =="RIGHT"){
      right_motor.run (BACKWARD);
      left_motor.run (FORWARD);
      delay(500);
    }
    if (readString =="STOP"){
      right_motor.run (RELEASE);
      left_motor.run (RELEASE);
      delay(500);
    }

    readString="";
    }
    int duration, distance;
    digitalWrite(trigPin, HIGH); 
    delay(1);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;
    if (distance <= 50 && distance >= 0) {
      digitalWrite(buzzPin, HIGH);
    } 
    else {
      digitalWrite(buzzPin, LOW);
    }
    delay(60);
}

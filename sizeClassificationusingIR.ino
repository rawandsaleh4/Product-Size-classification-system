#include <Wire.h>
#include <Servo.h>
Servo myservo;
#define LSA 90 // large size angle
#define MSA 0 // meduim size angle
#define SSA -90 // small size angle
#define IR1 2 // Sensor1
#define IR2 3 //Sensor2
#define IR3 4 //Sensor3
void setup() {
  // put your setup code here, to run once:
 myservo.attach(5); 
 for(int i=2;i<=4;i++){
 pinMode(i,INPUT); // infrared light sensors
}
myservo.write(0);}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(IR1)==1&&digitalRead(IR2)==0&&digitalRead(IR3)==0){
  myservo.write(SSA);
  delay(15);
}
if(digitalRead(IR1)==1&&digitalRead(IR2)==1&&digitalRead(IR3)==0){
  myservo.write(MSA);
  delay(15);
}
if(digitalRead(IR1)==1&&digitalRead(IR2)==1&&digitalRead(IR3)==1){
  myservo.write(LSA);
  delay(15);
}

}

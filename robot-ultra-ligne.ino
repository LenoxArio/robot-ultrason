#include <Servo.h>
#include "mouvement.h"
#include "ultrason.h"
Servo servo;


void setup() {
  Serial.begin(9600);
  servo.attach(8);
  setup2();
  servo.write(80);
}

void loop() {
  ultrasonloop();
  if (20 >= ultrason) {
    detection();
  }else{
    avancer();
  }
  delay(10);
}

void detection(){
  stop();
    delay(50);
    reculer();
    delay(100);
    stop();
    servo.write(180);
    delay(1000);
    for (int i = 0 ; i < 100 ; i++ ) {
      if (20 >= ultrason) {
        DetectDroite();
        }else{
          delay(500);
          servo.write(80);
          delay(500);
          gauche();
          delay(200);
          stop();
          delay(100);
          return;
        }
      delay(10);
    }
}


void DetectDroite(){
  stop();
  delay(50);
  reculer();
  delay(100);
  stop();
  servo.write(0);
  delay(1000);
  for (int i = 0 ; i < 100 ; i++ ) {
    if (20 >= ultrason) {
      delay(500);
      stop();
      delay(30);
      servo.write(80);
      delay(1000);
      droite();
      delay(200);
      stop();
      delay(-1);
      }else{
          delay(500);
          servo.write(80);
          delay(500);
          droite();
          delay(200);
          stop();
          delay(100);
          return;
        }
        delay(10);
    }    
}



int motor1a = 4;
int motor1b = 5;
int motor2a = 7;
int motor2b = 6;

void setup2(){pinMode(motor1a, OUTPUT);pinMode(motor1b, OUTPUT);pinMode(motor2a, OUTPUT);pinMode(motor2b, OUTPUT);}
void avancer(){digitalWrite(motor2a, HIGH);digitalWrite(motor1a, HIGH);}
void reculer(){digitalWrite(motor1b, HIGH);digitalWrite(motor2b, HIGH);}
void droite(){digitalWrite(motor1a, HIGH);digitalWrite(motor2b, HIGH);}
void gauche(){digitalWrite(motor1b, HIGH);digitalWrite(motor2a, HIGH);}
void stop(){digitalWrite(motor1a, LOW);digitalWrite(motor2a, LOW);digitalWrite(motor1b, LOW);digitalWrite(motor2b, LOW);}




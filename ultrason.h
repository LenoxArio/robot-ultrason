int ultrason = 0; 
int delayTime = 500;
long capteurs(int triggerPin, int echoPin);
void ultrasonloop(){
ultrason = 0.01723 * capteurs(2, 3);  //broche du capteur [2 = trig] & [3 = echo]
  Serial.println(ultrason); 
}
long capteurs(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}
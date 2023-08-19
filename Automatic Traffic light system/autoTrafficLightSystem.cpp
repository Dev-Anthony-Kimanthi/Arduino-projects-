/*
This setup mimics the working of an automated traffic light system
This setup has:
  1. 4 sets of traffic lights
  2. 4 sets of amber lights
  3. 4 sets of red lights
  4. 4 sets of green lights
These four sets represent the four directions of traffic or four roads
The lights are set to work in a sequence:
Amber lights are set to work for 1 second
Green lights are set to work for 5 seconds
Amber lights are set to work for 1 second
Red lights are set to work until any of the lights in that particular set are on.
*/
const int red1 = 2;
const int amber1 = 3;
const int green1 = 4;
const int red2 = 7;
const int amber2 = 6;
const int green2 = 5;
const int red3 = 8;
const int amber3 = 9;
const int green3 = 10;
const int red4 = 11;
const int amber4 = 12;
const int green4 = 13;

void setup(){
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(amber1, OUTPUT);
  pinMode(amber2, OUTPUT);
  pinMode(amber3, OUTPUT);
  pinMode(amber4, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(green4, OUTPUT);
}

void loop(){
  
  digitalWrite(red1, LOW);
  digitalWrite(amber1, HIGH);
  delay (1000);
  digitalWrite(amber1, LOW);
  delay (1000);
  digitalWrite(green1, HIGH);
  delay(5000);
  digitalWrite(green1, LOW);
  delay (1000);
  digitalWrite(amber1, HIGH);
  delay (1000);
  digitalWrite(amber1, LOW);
  delay(1000);
  if(digitalRead(amber1) == HIGH || digitalRead(green1) == HIGH ){
    digitalWrite(red1, LOW);
  }else{
    digitalWrite(red1, HIGH);
  }
  
  digitalWrite(red2, LOW);
  digitalWrite(amber2, HIGH);
  delay (1000);
  digitalWrite(amber2, LOW);
  delay (1000);
  digitalWrite(green2, HIGH);
  delay(5000);
  digitalWrite(green2, LOW);
  delay (1000);
  digitalWrite(amber2, HIGH);
  delay (1000);
  digitalWrite(amber2, LOW);
  delay (1000);
  if(digitalRead(amber2) == HIGH || digitalRead(green2) == HIGH ){
    digitalWrite(red2, LOW);
  }else{
    digitalWrite(red2, HIGH);
  }

  digitalWrite(red3, LOW);
  digitalWrite(amber3, HIGH);
  delay (1000);
  digitalWrite(amber3, LOW);
  delay (1000);
  digitalWrite(green3, HIGH);
  delay(5000);
  digitalWrite(green3, LOW);
  delay (1000);
  digitalWrite(amber3, HIGH);
  delay (1000);
  digitalWrite(amber3, LOW);
  delay (1000);
  if(digitalRead(amber3) == HIGH || digitalRead(green3) == HIGH ){
    digitalWrite(red3, LOW);
  }else{
    digitalWrite(red3, HIGH);
  }

  digitalWrite(red4, LOW);
  digitalWrite(amber4, HIGH);
  delay (1000);
  digitalWrite(amber4, LOW);
  delay (1000);
  digitalWrite(green4, HIGH);
  delay(5000);
  digitalWrite(green4, LOW);
  delay (1000);
  digitalWrite(amber4, HIGH);
  delay (1000);
  digitalWrite(amber4, LOW);
  delay (1000);
  if(digitalRead(amber4) == HIGH || digitalRead(green4) == HIGH ){
    digitalWrite(red4, LOW);
  }else{
    digitalWrite(red4, HIGH);
  }
}
  
  
  
  



























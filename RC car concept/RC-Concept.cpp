/*
This setup has been made to try and mimic how a basic car works
This setup has:
 1. 2 pairs of indicators which work as hazards
 2. Headlights
 3. Breaklights
 4. Accelerator
 5. Tires
*/
const int headLights = 2;
const int breakLights = 3;
const int leftIndicator = 4;
const int rightIndicator = 5;
const int gasPedal = 6;
const int indicateLeft = 7;
const int indicateRight = 8;
const int tire1 = 9;
const int tire2 = 10;
const int tire3 = 11;
const int tire4 = 12;
const int hazard = 13;

void setup(){
  pinMode(headLights, OUTPUT);
  pinMode(breakLights, OUTPUT);
  pinMode(leftIndicator, OUTPUT);
  pinMode(rightIndicator, OUTPUT);
  pinMode(gasPedal, INPUT);
  pinMode(indicateLeft, INPUT);
  pinMode(indicateRight, INPUT);
  pinMode(hazard, INPUT);
}

void loop(){
  if(digitalRead(6) == HIGH){
    digitalWrite(headLights, HIGH);
    digitalWrite(breakLights, LOW);
    digitalWrite(tire1, HIGH);
    digitalWrite(tire2, HIGH);
    digitalWrite(tire3, HIGH);
    digitalWrite(tire4, HIGH);
  }
  else{
    digitalWrite(headLights, LOW);
    digitalWrite(breakLights, HIGH);
    digitalWrite(tire1, LOW);
    digitalWrite(tire2, LOW);
    digitalWrite(tire3, LOW);
    digitalWrite(tire4, LOW);
  }
  if(digitalRead(7)== HIGH){
    digitalWrite(leftIndicator, HIGH);
    delay(500);
    digitalWrite(leftIndicator, LOW);
    delay(500);
  }
   if(digitalRead(8)== HIGH){
    digitalWrite(rightIndicator, HIGH);
    delay(500);
    digitalWrite(rightIndicator, LOW);
    delay(500);
  }
  if(digitalRead(13)== HIGH){
    digitalWrite(rightIndicator, HIGH);
    digitalWrite(leftIndicator, HIGH);
    delay(500);
    digitalWrite(rightIndicator, LOW);
    digitalWrite(leftIndicator, LOW);
    delay(500);
  }
}
























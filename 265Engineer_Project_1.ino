int buzzer = 4;
int obstacle = 3;
int NumObstacle = 0;
void setup() {
  // put your setup code here, to run once:
pinMode (obstacle , INPUT);
pinMode (buzzer , OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(obstacle)==HIGH)
{
  NumObstacle++;
  Serial.println("Number Of Objects  : " + String (NumObstacle));
  digitalWrite(buzzer , HIGH);
  delay(750);
}
 Serial.println("Number Of Objects   : " + String (NumObstacle));
 digitalWrite(buzzer , LOW);
}

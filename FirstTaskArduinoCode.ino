//to define the pins
const int motor1ch1 = 0; 
const int motor1ch2 = 1; 
const int motor2ch1 = 2; 
const int motor2ch2 = 3;

void setup() 
{
  pinMode(motor1ch1 , OUTPUT);
  pinMode(motor1ch2 , OUTPUT);
  pinMode(motor2ch1 , OUTPUT);
  pinMode(motor2ch2 , OUTPUT);
}
void loop()
{
  //clockwise rotation for both motors
  digitalWrite(motor1ch1 , HIGH);
  digitalWrite(motor1ch2 , LOW);
  digitalWrite(motor2ch1 , HIGH);
  digitalWrite(motor2ch2 , LOW);
  delay(5000);

  //anti-clockwise rotation for both motors
  digitalWrite(motor1ch1 , LOW);
  digitalWrite(motor1ch2 , HIGH);
  digitalWrite(motor2ch1 , LOW);
  digitalWrite(motor2ch2 , HIGH);
  delay(5000);

  //clockwise rotation for motor 1
  digitalWrite(motor1ch1 , HIGH);
  digitalWrite(motor1ch2 , LOW);
  digitalWrite(motor2ch1 , LOW);
  digitalWrite(motor2ch2 , LOW);
  delay(5000);
  
  //clockwise rotation for motor 2
  digitalWrite(motor1ch1 , LOW);
  digitalWrite(motor1ch2 , LOW);
  digitalWrite(motor2ch1 , HIGH);
  digitalWrite(motor2ch2 , LOW);
  delay(5000);
  
    //anti-clockwise rotation for motor 1
  digitalWrite(motor1ch1 , LOW);
  digitalWrite(motor1ch2 , HIGH);
  digitalWrite(motor2ch1 , LOW);
  digitalWrite(motor2ch2 , LOW);
  delay(5000);
  
  //anti-clockwise rotation for motor 2
  digitalWrite(motor1ch1 , LOW);
  digitalWrite(motor1ch2 , LOW);
  digitalWrite(motor2ch1 , LOW);
  digitalWrite(motor2ch2 , HIGH);
  delay(5000);

  //Stop for 5sec
  digitalWrite(motor1ch1 , LOW);
  digitalWrite(motor1ch2 , LOW);
  digitalWrite(motor2ch1 , LOW);
  digitalWrite(motor2ch2 , LOW);
  delay(5000);

 }

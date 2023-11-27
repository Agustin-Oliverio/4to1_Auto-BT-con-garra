#define motor1A 9
#define motor1B 3
#define motor2A 5
#define motor2B 6

void setup()
{
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  
  Serial.begin(9600);
  BT.begin(9600);
}//setup

void loop()
{
  
}//loop

////////////////////////////////////////////////////////////////////

void avanzar()
{
  digitalWrite (motor1A, HIGH);
  digitalWrite (motor1B, LOW );
  digitalWrite (motor2A, HIGH);
  digitalWrite (motor2B, LOW );
}//avanzar

void retroceso()
{
  digitalWrite (motor1A, LOW );
  digitalWrite (motor1B, HIGH);
  digitalWrite (motor2A, LOW );
  digitalWrite (motor2B, HIGH);
}//retroceso

void derecha()
{
  digitalWrite (motor1A, LOW );
  digitalWrite (motor1B, HIGH);
  digitalWrite (motor2A, HIGH);
  digitalWrite (motor2B, LOW );
}//derecha

void izquierda()
{
  digitalWrite (motor1A, HIGH);
  digitalWrite (motor1B, LOW );
  digitalWrite (motor2A, LOW );
  digitalWrite (motor2B, HIGH);
}//izquierda

void detener()
{
  digitalWrite (motor1A, LOW);
  digitalWrite (motor1B, LOW);
  digitalWrite (motor2A, LOW);
  digitalWrite (motor2B, LOW);
}//detener

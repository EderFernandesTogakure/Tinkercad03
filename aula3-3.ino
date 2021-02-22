int pino = 10;
int pino1 = 13;

void setup()
{
  pinMode(pino, OUTPUT);
  pinMode(pino1, OUTPUT);
}

void loop()
{
  digitalWrite(pino, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pino, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pino1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pino1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
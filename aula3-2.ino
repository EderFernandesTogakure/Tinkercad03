int pino = 13;

void setup()
{
  pinMode(pino, OUTPUT);
}

void loop()
{
  digitalWrite(pino, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pino, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
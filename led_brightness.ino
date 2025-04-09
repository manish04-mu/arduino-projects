
#define LED 5
#define POTEN A0

int brightness = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(POTEN, INPUT);
}

void loop()
{
  brightness = analogRead(POTEN);
  analogWrite(LED, brightness/4);
}
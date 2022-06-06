const int OUTPIN = 7;

void setup() 
{
  int INPIN;
  INPIN = OUTPIN + 1;
}

void loop() 
{
  Serial.println(OUTPIN);
}

int delayTime = 100;
void setup() {
  // put your setup code here, to run once:
  for(int pin =10; pin <=12; pin++)
  {
    pinMode(pin, OUTPUT);
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
for(int pin =10; pin <= 12; pin++)
{
digitalWrite(pin, HIGH);
delay(delayTime);
digitalWrite(pin, LOW);
delay (delayTime);
}
}

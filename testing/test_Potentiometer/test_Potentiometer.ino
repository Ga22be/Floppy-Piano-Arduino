int potPin = A0;
int potVal = 0;

void setup()
{
  pinMode(potPin, INPUT);  
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);  
  Serial.print("Analog value: ");
  Serial.println(potVal);
  delay(500); 
}

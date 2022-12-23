const int photoPin = 8; //connects pin 8

void setup() {
  pinMode(LED_BUILTIN, output); //Declare pin 13 to output
  pinMode(photoPin, input); //Declare pin 8 to input
}

void loop() {
  boolean Value = digitalRead(photoPin); //instantiate var to keep track of light input

  if(Value == HIGH) //if light is blocked
    {
      digitalWrite(LED_BUILTIN, HIGH); //turn on led
    }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); //else keep it off
  }
}

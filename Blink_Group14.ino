int ledPin=13;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(3000);   
  digitalWrite(ledPin, LOW);
  delay(1000); 
  digitalWrite(ledPin, HIGH);
  delay(5000);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(2000); 
  digitalWrite(ledPin, HIGH);
  delay(3000);  
  digitalWrite(ledPin, HIGH);
  delay(3000);                   // wait for a second
}

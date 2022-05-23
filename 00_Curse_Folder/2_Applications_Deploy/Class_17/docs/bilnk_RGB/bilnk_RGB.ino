
void setup() {
  
  // Pins for the built-in RGB LEDs on the Arduino Nano 33 BLE Sense
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);

  // Note: The RGB LEDs are ON when the pin is LOW and off when HIGH.
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, HIGH);
}

void loop() {
  digitalWrite(LEDR, LOW); 
  delay(1000);              
  digitalWrite(LEDR, HIGH);    
  delay(1000);     

  digitalWrite(LEDG, LOW); 
  delay(1000);              
  digitalWrite(LEDG, HIGH);    
  delay(1000);  

  digitalWrite(LEDB, LOW); 
  delay(1000);              
  digitalWrite(LEDB, HIGH);    
  delay(1000);  
}

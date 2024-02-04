int LED = 13; // pin declaration

void setup() {
  pinMode(LED, OUTPUT); // initialization
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}

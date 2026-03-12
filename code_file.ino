int ldrPin = A0;
int buzzerPin = 8;
int threshold = 500; // Adjust based on your environment
void setup() {
 pinMode(buzzerPin, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 int ldrValue = analogRead(ldrPin);
 Serial.println(ldrValue);
 if (ldrValue < threshold) {
 // Laser beam is blocked
 digitalWrite(buzzerPin, HIGH);
 } else {
 digitalWrite(buzzerPin, LOW);
 }
 delay(100);
}

/* heartbeat
 *
 * <n> sec have elapsed
 *
 */

void setup() {
  Serial.begin(9600);
  Serial.println("Start timer.");

  pinMode(13, OUTPUT);
}

void loop() {
  int timeM = millis();
  int timeS = timeM/1000;

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  Serial.print(timeS);
  Serial.println(" sec have elapsed");
  Serial.print(timeM);
  Serial.println(" ms");
  delay(900);
}

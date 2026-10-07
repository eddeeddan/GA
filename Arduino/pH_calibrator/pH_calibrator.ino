const int pHPin = A0;
float offset = 0.85;   // justeras vid kalibrering

float readPH() {
  long sum = 0;
  for (int i = 0; i < 20; i++) {   // medelvärde minskar brus
    sum += analogRead(pHPin);
    delay(20);
  }
  float voltage = (sum / 20.0) * 5.0 / 1024.0;
  return 3.5 * voltage + offset;   // lutning ca 3,5 pH/V
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("pH: ");
  Serial.println(readPH(), 2);
  delay(1000);
}
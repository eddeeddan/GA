const int mPump = 2; //main pump
const int wPump = 3; // water pump
const int nPump = 4; // Nutrient pump

void setup() {
  pinMode(mPump, OUTPUT);
  pinMode(wPump, OUTPUT);
  pinMode(nPump, OUTPUT);
}

void loop() {
  contrPump(nPump, HIGH, 1000);
  delay(5000);

}

void drown(int state) {
  digitalWrite(mPump, state);
}

void contrPump(int pumpNr, int state, int amount) {
  digitalWrite(pumpNr, state);
  delay(amount);
  digitalWrite(pumpNr, !state);
}
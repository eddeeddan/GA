const int drownPump = 2;
const int waterPump = 3;
const int nutriPump = 4;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void drown(int state) {
  digitalWrite(drownPump, state);
}

void water(int state, int amount) {
  digitalWrite(waterPump, state);
  delay(amount);
  digitalWrite(waterPump, !state);
}

void nutri(int state, int amount) {
  digitalWrite(nutriPump, state);
  delay(amount);
  digitalWrite(nutriPump, !state);
}
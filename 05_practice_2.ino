#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  count = 0;
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  count += 1;
  Serial.println(count);
  delay(1000); // wait for 1000 milliseconds
}

void loop() {
  while(1) {
    if (count == 11) {
      break;
    }
    toggle = toggle_state(toggle); //toggle LED value.
    count += 1;
    Serial.println(count);
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(100); // wait for 1000 milliseconds
    } // infinite loop
}

int toggle_state(int toggle) {
  return !toggle;
}

const int mic_in_a = 9;
const int led_out_d = 8;

int mic_in_a_val = 0;
int led_is_on = 0;

void setup() {
  Serial.begin(9600);
  pinMode(mic_in_a, INPUT);
  pinMode(led_out_d, OUTPUT);
//  mic_in_a_val = digitalRead(mic_in_a);
}

void loop() {
  int new_reading = digitalRead(mic_in_a);

  if (new_reading > 0) {
    Serial.println("You clapped!");
    led_is_on = (led_is_on == 0) ? 1 : 0;
  }

  digitalWrite(led_out_d, led_is_on == 1 ? HIGH : LOW);

  Serial.println(new_reading);
}

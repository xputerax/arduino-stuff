const int ir_in = A0;
const int buzzer_out = 8;

void setup() {
  Serial.begin(9600);
  pinMode(ir_in, INPUT);
  pinMode(buzzer_out, OUTPUT);
}

void loop() {
  int ir_reading = digitalRead(ir_in);

  if (ir_reading == 0) {
    digitalWrite(buzzer_out, HIGH);
    delay(100);
    digitalWrite(buzzer_out, LOW);    
  }
  
//  int ir_reading_1 = analogRead(ir_in);
//  delay(1000);
//  int ir_reading_2 = analogRead(ir_in);
//
//  int diff = ir_reading_2 - ir_reading_1;
//
//  if (diff > 250) {
//    digitalWrite(buzzer_out, HIGH);
//    delay(100);
//    digitalWrite(buzzer_out, LOW);
//  }

  Serial.println(ir_reading);
  delay(100);
}

/**
 * Gas detector + buzzer + blinking LED
 */

#define TRUE 1
#define FALSE 0

const int gas_detector_input = A0;
const int gas_detector_input_d = 7;
const int buzzer_output = 8;
const int led_output= 9;
int ring_buzzer = FALSE;

void setup()
{
  Serial.begin(9600);
  
  pinMode(gas_detector_input, INPUT);
  pinMode(gas_detector_input_d, INPUT);
  pinMode(buzzer_output, OUTPUT);
  pinMode(led_output, OUTPUT);
}

void loop()
{
  if (ring_buzzer == TRUE) {
    digitalWrite(buzzer_output, HIGH);
    digitalWrite(led_output, HIGH);
    delay(250);
    digitalWrite(led_output, LOW);
    delay(250);
    return;
  }
  
//  char buffer[100];/
//  int gas_detector_/val = analogRead(gas_detector_input);
  int gas_detector_val_d = digitalRead(gas_detector_input_d);

  // gas detected
  if (gas_detector_val_d == FALSE) {
    ring_buzzer = TRUE;
  }

//  Serial.println(ring_buzzer/);

///  sprintf(buffer, "analog: %d | digital %d", gas_detector_val, gas_detector_val_d);

//  Serial.println(buffer);/

  delay(500);
}

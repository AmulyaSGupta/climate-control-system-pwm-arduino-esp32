#define TEMP_PIN A0
#define FAN_PIN 9

void setup() {
  Serial.begin(9600);
  pinMode(FAN_PIN, OUTPUT);
}

void loop() {
  int value = analogRead(TEMP_PIN);

  float voltage = value * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100.0;

  int pwmValue = 0;

  // STRICT OFF region
  if (temperature < 27.0) {
    pwmValue = 0;
  }

  // STRICT FULL region
  else if (temperature >= 40.0) {
    pwmValue = 255;
  }

  // LINEAR REGION (27–40)
  else {
    float slope = 255.0 / (40.0 - 27.0);
    pwmValue = (int)((temperature - 27.0) * slope);
  }

  // EXTRA SAFETY: force complete OFF below threshold
  if (temperature < 27.0) {
    analogWrite(FAN_PIN, 0);
  } else {
    analogWrite(FAN_PIN, pwmValue);
  }

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C, PWM: ");
  Serial.println(pwmValue);

  delay(500);
}

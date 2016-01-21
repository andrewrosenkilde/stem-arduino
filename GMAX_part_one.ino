float force_sensor_value;
float threshold = 10;
float ballMass = 0.189;

void setup() {
  Serial.begin(9600);
}
void loop() {
  force_sensor_value = analogRead(0);
  if(force_sensor_value > threshold) {
    Serial.println(force_sensor_value);
  } else {}
  delay(10);
  float forceInNewtons = ((((146) * force_sensor_value)/(1023 - force_sensor_value)) / 101.97);
  float accelerationInMetersPerSecond = forceInNewtons / ballMass;
  float accelerationInGs = accelerationInMetersPerSecond / 9.8;
  if (force_sensor_value > threshold) {
  Serial.println("The acceleration in Gs is " + String(accelerationInGs));
  } else {}
}

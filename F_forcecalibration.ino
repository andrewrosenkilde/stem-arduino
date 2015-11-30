void setup() {
    Serial.begin(9600);
    pinMode(8, INPUT);
}
void loop() {
    int val = digitalRead(8);
    if (val == HIGH) {
        Serial.println("Taking force data...");
        int total = 0;
        for(int count = 0; count<=9; count++) {
            Serial.println(analogRead(0));
            total = total + analogRead(0);
            delay(100);
        }
        int averageForce = total/10;
        Serial.println("The average force value is " + String(averageForce)) + ".";
    }
    delay(200);
}

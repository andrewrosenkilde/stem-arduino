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
        float averageForce = total/10;
        Serial.println("Average raw force value: " + String(averageForce)) + ".";
        float massInGrams = ((106)*averageForce)/(1023-averageForce);
        Serial.println("Average mass in grams: " + String(massInGrams)) + ".";
        float massInKilos = massInGrams / 1000;
        Serial.println("Average mass in kilos: " + String(massInKilos)) + ".";
        float weightInNewtons = massInGrams / 101;
        Serial.println("Average weight in newtons: " + String(weightInNewtons)) + ".";
        float weightInPounds = weightInNewtons / 4.4;
        Serial.println("Average weight in pounds: " + String(weightInPounds)) + ".";
    }
    delay(200);
}

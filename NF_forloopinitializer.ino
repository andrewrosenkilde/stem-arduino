int thisPin;
void setup() {
    for(thisPin = lowest_pin_of_pin_array; thisPin <= highest_pin_of_pin_array; thisPin++) {
        pinMode(thisPin, INPUT_OR_OUTPUT);
    }
}

void loop() {
}

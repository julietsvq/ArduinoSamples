int pin = 0;
int prevValue, currentValue = 0;
float celsius;

void setup() {
	Serial.begin(9600);
}

void loop() {
	currentValue = analogRead(pin);

	celsius = currentValue / 9.31;
	Serial.print(celsius);
	prevValue = currentValue;

	delay(2000);
}

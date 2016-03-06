int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
	pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	analogWrite(led, brightness);
	brightness = brightness + fadeAmount;

	if (brightness == 0 || brightness == 255) {
		fadeAmount = -fadeAmount;
	}

	delay(30);
}

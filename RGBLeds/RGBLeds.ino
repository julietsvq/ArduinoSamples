int numLEDs = 3;
int redPin = 5;
int greenPin = 4;
int bluePin = 3;
int ledPin[3];
int index = 0;

void setup() {
	ledPin[0] = bluePin;
	ledPin[1] = greenPin;
	ledPin[2] = redPin;

	for (int i = 0; i < numLEDs; i++)
		pinMode(i, OUTPUT);
}

void loop() {
	int currentLed = ledPin[index%numLEDs];
	digitalWrite(currentLed, HIGH);
	delay(2000);
	digitalWrite(currentLed, LOW);
	index++;  
}

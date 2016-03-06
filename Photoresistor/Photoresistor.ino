int photocell = 5;
int buzzer = 9;
int led = 8;
unsigned int currentLight;

void setup() {
	pinMode(buzzer, OUTPUT);
	pinMode(led, OUTPUT);
	currentLight = analogRead(photocell) + 10;
}

void loop() {
	unsigned int val = analogRead(photocell);

	if (val > currentLight) {
		digitalWrite(buzzer, HIGH);
		digitalWrite(led, HIGH);
	}

	else {
		digitalWrite(buzzer, LOW);
		digitalWrite(led, LOW);
	}
}

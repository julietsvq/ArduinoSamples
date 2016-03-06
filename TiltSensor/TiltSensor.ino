int led = 8;
int tiltSensor = 5;
int baseTilt; 

void setup() {
	pinMode(led, OUTPUT);
	baseTilt = analogRead(tiltSensor);
}

void loop() {
	int tiltSense = analogRead(tiltSensor);

	//Vcc on analog from 0 to 1023
	//if at least half of Vcc there is no tilt
	if (tiltSense >= baseTilt)
		digitalWrite(led, HIGH);
	else
		digitalWrite(led, LOW);
}

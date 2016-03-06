int pot = 0; 
int led = 13; 
int val = 0;

void setup() {
	pinMode(led, OUTPUT);
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	val = analogRead(pot);
	digitalWrite(led, HIGH);
	delay(val);
	digitalWrite(led, LOW);
	delay(val);
	Serial.println(val);
}

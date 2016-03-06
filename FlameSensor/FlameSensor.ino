int led = 9;
int photosensor = 5;
int brightness = 0;
const int backgroundIROffset = 20;  //remove some background IR sources

void setup() {
	pinMode(led, OUTPUT);
}


void loop() {
	brightness = analogRead(photosensor) + backgroundIROffset;
	brightness = map(brightness, 0, 1023, 255, 0);
	analogWrite(led, brightness);
}

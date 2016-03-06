const int ledA = 2;
const int ledB = 3;
const int ledC = 4;
const int ledD = 6;
const int ledE = 7;
const int ledF = 8;
const int ledG = 9;

const int DELAY_CNT = 500;

void setup() {
	pinMode(ledA, OUTPUT);
	pinMode(ledB, OUTPUT);
	pinMode(ledC, OUTPUT);
	pinMode(ledD, OUTPUT);
	pinMode(ledE, OUTPUT);
	pinMode(ledF, OUTPUT);
	pinMode(ledG, OUTPUT);
}

void loop() {
	sayHello();
}

void turnoff_all()
{
	digitalWrite(ledA, LOW);   // set the LED off
	digitalWrite(ledB, LOW);   // set the LED off
	digitalWrite(ledC, LOW);   // set the LED off
	digitalWrite(ledD, LOW);   // set the LED off
	digitalWrite(ledE, LOW);   // set the LED off
	digitalWrite(ledF, LOW);   // set the LED off
	digitalWrite(ledG, LOW);   // set the LED off
}

void sayHello() {
	turnoff_all();
	delay(DELAY_CNT * 2);
	display_H();
	delay(DELAY_CNT);

	turnoff_all();
	delay(200);
	display_E();
	delay(DELAY_CNT);

	turnoff_all();
	delay(200);
	display_L();
	delay(DELAY_CNT);

	turnoff_all();
	delay(200);
	display_L();
	delay(DELAY_CNT);

	turnoff_all();
	delay(200);
	display_O();
	delay(DELAY_CNT);
}

void display_A()
{
	digitalWrite(ledE, HIGH);
	digitalWrite(ledF, HIGH);
	digitalWrite(ledA, HIGH);
	digitalWrite(ledB, HIGH);
	digitalWrite(ledC, HIGH);
	digitalWrite(ledG, HIGH);
}

void display_B()
{
	display_8();
}

void display_C()
{
	digitalWrite(ledA, HIGH);
	digitalWrite(ledF, HIGH);
	digitalWrite(ledE, HIGH);
	digitalWrite(ledD, HIGH);
}

void display_D()
{
	digitalWrite(ledA, HIGH);
	digitalWrite(ledB, HIGH);
	digitalWrite(ledC, HIGH);
	digitalWrite(ledD, HIGH);
	digitalWrite(ledE, HIGH);
	digitalWrite(ledF, HIGH);
}

void display_H()
{
	digitalWrite(ledF, HIGH);
	digitalWrite(ledE, HIGH);
	digitalWrite(ledG, HIGH);
	digitalWrite(ledB, HIGH);
	digitalWrite(ledC, HIGH);
}

void display_E()
{
	digitalWrite(ledA, HIGH);
	digitalWrite(ledF, HIGH);
	digitalWrite(ledG, HIGH);
	digitalWrite(ledE, HIGH);
	digitalWrite(ledD, HIGH);
}

void display_L()
{
	digitalWrite(ledF, HIGH);
	digitalWrite(ledE, HIGH);
	digitalWrite(ledD, HIGH);
}

void display_O()
{
	display_0();
}

void scrollNumbers() {
	turnoff_all();
	display_0();
	delay(DELAY_CNT);

	turnoff_all();
	display_1();
	delay(DELAY_CNT);

	turnoff_all();
	display_2();
	delay(DELAY_CNT);

	turnoff_all();
	display_3();
	delay(DELAY_CNT);

	turnoff_all();
	display_4();
	delay(DELAY_CNT);

	turnoff_all();
	display_5();
	delay(DELAY_CNT);

	turnoff_all();
	display_6();
	delay(DELAY_CNT);

	turnoff_all();
	display_7();
	delay(DELAY_CNT);

	turnoff_all();
	display_8();
	delay(DELAY_CNT);

	turnoff_all();
	display_9();
	delay(DELAY_CNT);
}

void display_0()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
	digitalWrite(ledE, HIGH);   // set the LED on
	digitalWrite(ledF, HIGH);   // set the LED on
}

void display_1()
{
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
}

void display_2()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
	digitalWrite(ledE, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
}

void display_3()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
}

void display_4()
{
	digitalWrite(ledF, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
}

void display_5()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledF, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
}

void display_6()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledF, HIGH);   // set the LED on
	digitalWrite(ledE, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
}

void display_7()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
}

void display_8()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledD, HIGH);   // set the LED on
	digitalWrite(ledE, HIGH);   // set the LED on
	digitalWrite(ledF, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
}

void display_9()
{
	digitalWrite(ledA, HIGH);   // set the LED on
	digitalWrite(ledB, HIGH);   // set the LED on
	digitalWrite(ledC, HIGH);   // set the LED on
	digitalWrite(ledF, HIGH);   // set the LED on
	digitalWrite(ledG, HIGH);   // set the LED on
}

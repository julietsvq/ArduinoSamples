#include "Notes.h"

int buzzer = 7;

void setup() {
	//playSiren();
	playMelody();
}

void loop() {

}

void playSiren() {
	int noteDuration = 1000 / 3;
	int pauseBetweenNotes = noteDuration * 0.2;

	for (int i = 0; i < 4; i++) {
		for (int j = 25; j < 120; j++) {
			tone(buzzer, 20 * j, noteDuration);
			delay(pauseBetweenNotes);
		}

		for (int j = 120; j >= 25; j--) {
			tone(buzzer, 20 * j, noteDuration);
			delay(pauseBetweenNotes);
		}
	}
}

void playMelody() {
	int melody[] = {
		NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
	};

	int noteDurations[] = {
		4,8,8,4,4,4,4,4
	};

	int size = sizeof(melody) / sizeof(int);
	
	for (int thisNote = 0; thisNote < size; thisNote++) {
		// to calculate the note duration, take one second
		// divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / noteDurations[thisNote];
		tone(buzzer, melody[thisNote], noteDuration);
		
		int pause = noteDuration * 1.30;
		delay(pause);

		noTone(buzzer);
	}
}



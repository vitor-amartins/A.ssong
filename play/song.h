#include "notes.h"

#define SIXTEENTH 150 //Generally you can divide 15000 by the tempo of the song
#define NumNotas 12

short int tune[] = {
//Put the notes here
NO_NOTE, NOTE_G5, NOTE_A5, NOTE_F5, NO_NOTE, NOTE_G5, NO_NOTE, NOTE_G5, NOTE_A5, NOTE_F5, NO_NOTE, NOTE_G5
};

short int duration[] = {
//Put the duration of the note here
EIGHTH, EIGHTH, SIXTEENTH, SIXTEENTH, SIXTEENTH, SIXTEENTH+HALF, EIGHTH, EIGHTH, SIXTEENTH, SIXTEENTH, SIXTEENTH, SIXTEENTH+HALF
};

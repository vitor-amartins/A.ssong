#include "../notes.h"

#define SIXTEENTH 192
#define NumNotas 97

short int tune[] = {
NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_B3, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_CS4, NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_B3, NOTE_C4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_G4, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

short int duration[] = {
QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, HALF, HALF, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, HALF, HALF, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, WHOLE, QUARTER, EIGHTH, EIGHTH, QUARTER, EIGHTH, EIGHTH, QUARTER, EIGHTH, EIGHTH, HALF, QUARTER, EIGHTH, EIGHTH, QUARTER, EIGHTH, EIGHTH, QUARTER, EIGHTH, EIGHTH, QUARTER, QUARTER, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, EIGHTH, QUARTER, QUARTER, WHOLE
};


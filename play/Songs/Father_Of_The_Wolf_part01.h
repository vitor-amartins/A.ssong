#include "../notes.h"

#define SIXTEENTH 82
#define NumNotas 494

short int tune[] = {
NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_B4, NO_NOTE, NOTE_FS4, NO_NOTE, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_A3, NOTE_A3, NOTE_DS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_FS4, NOTE_B3, NOTE_B3, NOTE_E4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_A3, NOTE_A3, NOTE_DS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_FS4, NOTE_B3, NOTE_B3, NOTE_E4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_B4, NO_NOTE, NOTE_FS4, NO_NOTE, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NO_NOTE, NOTE_DS4, NO_NOTE, NOTE_CS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_B4, NO_NOTE, NOTE_FS4, NO_NOTE, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NO_NOTE, NOTE_E4, NO_NOTE, NOTE_DS4, NOTE_GS3, NOTE_DS5, NOTE_GS3, NOTE_CS5, NOTE_GS3, NOTE_DS5, NOTE_GS3, NOTE_B4, NOTE_GS3, NOTE_B4, NOTE_AS4, NOTE_B4, NOTE_CS5, NOTE_B4, NOTE_AS4, NOTE_B4, NOTE_GS3, NOTE_DS5, NOTE_GS3, NOTE_CS5, NOTE_GS3, NOTE_DS5, NOTE_GS3, NOTE_B4, NOTE_GS3, NOTE_B4, NOTE_CS5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_CS5, NOTE_B4, NOTE_E4, NOTE_DS5, NOTE_E4, NOTE_CS5, NOTE_E4, NOTE_DS5, NOTE_E4, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_AS4, NOTE_B4, NOTE_CS5, NOTE_B4, NOTE_AS4, NOTE_B4, NOTE_FS4, NOTE_CS5, NOTE_FS4, NOTE_B4, NOTE_FS4, NOTE_CS5, NOTE_FS4, NOTE_AS4, NOTE_FS4, NOTE_AS4, NOTE_B4, NOTE_CS5, NOTE_DS5, NOTE_CS5, NOTE_B4, NOTE_AS4, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_A3, NOTE_A3, NOTE_DS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_CS4, NOTE_A3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_E4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_FS4, NOTE_CS3, NOTE_CS3, NOTE_GS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_CS4, NOTE_CS3, NOTE_FS4, NOTE_B3, NOTE_B3, NOTE_E4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_DS4, NOTE_B3, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_B4, NO_NOTE, NOTE_FS4, NO_NOTE, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NO_NOTE, NOTE_DS4, NO_NOTE, NOTE_CS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_B4, NO_NOTE, NOTE_FS4, NO_NOTE, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NO_NOTE, NOTE_E4, NO_NOTE, NOTE_DS4, NOTE_GS5, NOTE_FS5, NOTE_B5, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_E5, NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_GS5, NOTE_FS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_FS5, NOTE_DS5, NOTE_B4
};

short int duration[] = {
QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+SIXTEENTH, SIXTEENTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER+WHOLE, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER, QUARTER+EIGHTH, QUARTER+EIGHTH, QUARTER, WHOLE, HALF, QUARTER, QUARTER
};

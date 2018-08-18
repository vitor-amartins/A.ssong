#include "Songs/Father_Of_The_Wolf_part02.h" //Put the name of your song file here

#define fstLed 6
#define sndLed 5

/* Your song should have the following informations:
 *  #include "notes.h"
 *  #define SIXTEENTH TIME_SIXTEENTH //The time of one sixteenth of your song
 *  int NumNotas  = 0; //The number of notes your song has
*/

void setup() {
  pinMode(8, OUTPUT);//Buzzer
  pinMode(fstLed, OUTPUT);//Led indicator when singing a note
  pinMode(sndLed, OUTPUT);//Led indicator when singing a note

  //If you want to repeat the song, just put the following lines into the loop function
  for(int i = 0; i < NumNotas; i++) {
    play(i, 2);
  }
}

void loop() {
  //No need to repeat the song
}

void play(int i, int numberLedsUse) {
  int ledOn = fstLed;
  switch (numberLedsUse) {
    case 1:
      digitalWrite(ledOn, HIGH);
      buzzer(tune[i], duration[i]);
      digitalWrite(ledOn, LOW);
      break;
    case 2:
      ledOn = i % 2 == 0 ? fstLed : sndLed;
      digitalWrite(ledOn, HIGH);
      buzzer(tune[i], duration[i]);
      digitalWrite(ledOn, LOW);
      break;
    default:
      buzzer(tune[i], duration[i]);
  }
}

void buzzer(int note, int duration) {
  tone(8, note, duration);
  delay(duration);
  noTone(8);
}


#define WHOLE (SIXTEENTH*16)
#define HALF (SIXTEENTH*8)
#define QUARTER (SIXTEENTH*4)
#define EIGHTH (SIXTEENTH*2)

#include "output.h" //Put the name of your song file here

short int allFreq[90] = {0, 31, 33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 123, 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978};

short int getFreq(char c) {
  int i = c;
  return allFreq[i];
}

void setup() {
  pinMode(8, OUTPUT);//Buzzer
  
  //If you want to repeat the song, just put the following lines into the loop function
  for(short int i = 0; i < NumNotas; i++) {
    buzzer(getFreq(tune[i]), duration[i]);
  }
}

void loop() {
  //No need to repeat the song
}

void buzzer(short int note, short int duration) {
  tone(8, note, duration);
  delay(duration);
  noTone(8);
}





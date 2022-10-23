#include "basicpitches.h"
#define SPEAKER 3
#define POTENTIOMETER A6
int NOTE_DUR = 140;

void play(int note, int dur){
  tone(SPEAKER, note);
  delay(dur * NOTE_DUR);
  noTone(SPEAKER);
  delay(dur * NOTE_DUR/3);
}

void song1(){
  play(NOTE_B4, 3);
  play(NOTE_E4, 3);
  delay(1);
  play(NOTE_G4, 3);
  play(NOTE_FS4, 1);
  play(NOTE_E4, 4);
  delay(5);
  play(NOTE_B4, 3);
  play(NOTE_A4, 3);
  delay(8);
  play(NOTE_FS4, 4);
}
void song2(){
  NOTE_DUR = 58;  // Set tempo to be faster
    play(NOTE_D4, 1);
    play(NOTE_FS4, 1);
    play(NOTE_B4, 1);
    play(NOTE_D4, 1);
    play(NOTE_CS4, 1);
    play(NOTE_B4, 1);
    play(NOTE_AS4, 1);
    play(NOTE_B4, 16); //m2
    delay(NOTE_DUR*6);
    play(NOTE_B4, 6);
    play(NOTE_CS4, 6);
    play(NOTE_D4, 6);
    play(NOTE_E4, 6); //m3
    play(NOTE_FS4, 7);
    play(NOTE_D4, 7);
    play(NOTE_FS4, 8);
    play(NOTE_D4, 8);
    play(NOTE_FS4, 22);
    delay(NOTE_DUR*4);
    play(NOTE_FS4, 2); //m4
    play(NOTE_D4, 6);
    play(NOTE_E4, 2);
    play(NOTE_CS4, 6);
    play(NOTE_D4, 2);
    play(NOTE_B4, 4); //m5
    play(NOTE_D4, 2);
    play(NOTE_FS4, 4);
    play(NOTE_B4, 2);
    play(NOTE_D4, 4);
    play(NOTE_B4, 4);
    play(NOTE_D4, 2);
    play(NOTE_FS4, 2);
    play(NOTE_D4, 2);
    play(NOTE_CS4, 2);
    play(NOTE_B4, 2);
    play(NOTE_A4, 2);
    play(NOTE_B4, 4); //m6
    play(NOTE_D4, 2);
    play(NOTE_G4, 4);
    play(NOTE_B4, 2);
    play(NOTE_D4, 4);
    play(NOTE_B4, 4);
    play(NOTE_D4, 2);
    play(NOTE_G4, 2);
    play(NOTE_D4, 2);
    play(NOTE_CS4, 2);
    play(NOTE_B4, 2);
    play(NOTE_A4, 2);
    play(NOTE_D4, 4); //m7
    play(NOTE_FS4, 2);
    play(NOTE_A4, 4);
    play(NOTE_D4, 2);
    play(NOTE_FS4, 4);
    play(NOTE_D4, 4);
    play(NOTE_FS4, 2);
    play(NOTE_A4, 2);
    play(NOTE_D4, 2);
    play(NOTE_CS4, 2);
    play(NOTE_B4, 2);
    play(NOTE_A4, 2);
    play(NOTE_E4, 12); //m8
    delay(NOTE_DUR*2);
    play(NOTE_FS4, 2);
    play(NOTE_D4, 6);
    play(NOTE_E4, 2);
    play(NOTE_CS4, 6);
    play(NOTE_D4, 2);
    play(NOTE_B4, 10); //m9
}
void song3(){
  //play(NOTE_G4, 1);
}

void setup() {
  pinMode(SPEAKER, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
   
}

void loop() {
  int x;
  x = analogRead(POTENTIOMETER);
  if(x <= 341){
    song1();
  }else if(x <= 682){
    song2();
  }else{
    song3();
  }
  
  

}

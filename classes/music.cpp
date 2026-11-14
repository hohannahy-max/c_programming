#include <iostream>
#include <cstring>
#include "music.h"
using namespace std;


music::music(const char* newTitle, const char* newArtist, int newYear, int newDuration, const char* newPublisher) : Media(newTitle, newYear){
  artist = new char[strlen(newArtist) + 1];
  strcpy(artist, newArtist);
    publisher = new char[strlen(newPublisher) + 1];
  strcpy(publisher, newPublisher);
  duration = newDuration;
}

//destructor
music:: ~music(){

  delete[] publisher;
  delete[] artist;
}
//return artist, publisher,duration, and type

char* music::getArtist( ){
  return artist;
  }
char* music::getPublisher(){
  return publisher;
  }

int music::getDuration(){
  return duration;

}
int music::getType() {
  return 2; //music number
}

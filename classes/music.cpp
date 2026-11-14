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

music:: ~music(){

  delete[] publisher;
  delete[] artist;
}
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

void music::print(){
  cout << "Title" << title << endl;
  cout << "Year" << year << endl;
  cout << "Publisher" << publisher << endl;
  cout << "Artist" << artist<< endl;
  cout << "Duration" << duration << endl;
}

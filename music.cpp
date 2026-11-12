#include <iostream>
#include <cstring>
#include "music.h"
using namespace std;


movies::movies(const char* newTitle, const char* newArtist, int newYear, int newDuration, const char* newPublisher) : Media(newTitle, newYear){
  artist = new char[strlen(newArtist) + 1];
  strcpy(artist, newArtist);
    publisher = new char[strlen(newPublisher) + 1];
  strcoy(publisher, newPublisher);
  duration = newDuration;
}

music:: ~music(){

  delete publisher[];
}
char* music::getArtist( ){
  return rating;
  }
char* music::getPublisher(){
  return director;
  }

int music::getDuration(){
  return rating;

}
int music::getType() {
  return 2; //music number
}

void games::print(){
  cout << "Title" << title << endl;
  cout << "Year" << year << endl;
  cout << "Publisher" << publisher << endl;
  cout << "Artist" << artist<< endl;
  ccot << "Duration" << duration << endl;
}

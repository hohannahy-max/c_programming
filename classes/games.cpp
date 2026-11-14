#include <iostream>
#include <cstring>
#include "games.h"
using namespace std;


games:: games(const char* newTitle, int newYear, const char* newPublisher, float newRating) : Media(newTitle, newYear){
  publisher = new char[strlen(newPublisher) + 1];
  strcpy(publisher, newPublisher);
  rating = newRating;
}

//destructor
games:: ~games(){

  delete[] publisher;
}
//return rating, publisher, and type

float games::getRating( ){
  return rating;
  }
char* games::getPublisher(){
  return publisher;
  }
int games::getType() {
  return 1; //return game identifier
}




#include <iostream>
#include <cstring>
#include "movies.h"
using namespace std;


movies::movies(const char* newTitle, const char* newDirector, int newYear, int newDuration, float newRating) : Media(newTitle, newYear){
  director = new char[strlen(newDirector) + 1];
  strcpy(director, newDirector);
  rating = newRating;
  duration = newDuration;
}

//destructor
movies:: ~movies(){

  delete[] director;
}

//return rating, director, duration, and type
float movies::getRating( ){
  return rating;
  }
char* movies::getDirector(){
  return director;
  }

 int movies::getDuration(){
  return duration;

}
int movies::getType() {
  return 3; //movies number
}



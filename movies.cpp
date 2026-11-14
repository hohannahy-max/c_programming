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

movies:: ~moves(){

  delete director[];
}
float movies::getRating( ){
  return rating;
  }
char* movies::getDirector(){
  return director;
  }

int movies::getDuration(){
  return rating;

}
int games::getType() {
  return 3; //movies number
}

void games::print(){
  cout << "Title" << title << endl;
  cout << "Year" << year << endl;
  cout << "Duration" << duration << endl;
  cout << "Director" << director << endl;
  cout << "Rating" << rating << endl;

}


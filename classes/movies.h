#ifndef MOVIES_H
#define MOVIES_H

#include "media_parent.h"

using namespace std;

class movies : public Media{


private:
  char* director;
  int duration;
  float rating;
 public:
  //initializes movie's title, director, year, duration, and rating
  movies(const char* newTitle, const char* newDirector, int newYear, int newDuration, float newRating);
  
  ~movies() override;//destructor

  //returns director, duration, rating
  char* getDirector();
  int getDuration();
  float getRating();

  int getType() override;//returns type identifier (3)

};

#endif

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
  movies(const char* newTitle, const char* newDirector, int newYear, int newDuration, float newRating);
  ~movies() override;
  char* getDirector();
  int getDuration();
  float getRating();

  int getType() override;

};

#endif

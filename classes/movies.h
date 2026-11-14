#ifndef MOVIES_H
#define MOVIES_H

#include "media_parent.h"

using namespace std;

class movies : public media_parent{


private:
  char* director;
  int duration;
  float rating;
 public:
  Movie(const char* newTitle, const char* newDirector, int newYear, int newDuration, float newRating);
  ~music() override;
  char* getDirector();
  int getDuration();
  float getRating();

  int getType() override;
  int print() override;

};

#endif

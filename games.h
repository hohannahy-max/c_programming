

#ifndef GAMES_H
#define GAMES_H

#include <iostream>
#include <cstring>
#include "media_parent.h"

using namespace std;

class games : public media_parent{

private:
  
  char* publisher;
  float rating;

public:
  games(const char* newTitle, int newYear, const char* newPublisher, float newRating);
  ~games() override;

  char* getPublisher();
  float getRating();

  int getType() override;
  int print() override;
};

#endif




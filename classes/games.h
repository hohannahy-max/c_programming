

#ifndef GAMES_H
#define GAMES_H

#include <iostream>
#include <cstring>
#include "media_parent.h"//inherits from media parent

using namespace std;

class games : public Media{

private:
  
  char* publisher;
  float rating;

public:
  
  games(const char* newTitle, int newYear, const char* newPublisher, float newRating);//initializes game's traits
  
  ~games() override; //destructor

  char* getPublisher();
  float getRating();

  int getType() override;//returns type identifier (1)
};

#endif




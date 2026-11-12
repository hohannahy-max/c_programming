/*
Name: Hannah Ho
Project: Classes
Date: 11/8/26

 */


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

  char* getPublisher();
  float getRating();

  int getType() override;
  int print() override;
};





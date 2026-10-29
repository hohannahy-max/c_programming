#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class movies : public media_parent{
 public:
  int year;
  char title[100];
  char artist[100];
  char director[100];
  char duration[4];
  float rating;
};






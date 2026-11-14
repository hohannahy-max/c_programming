#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

//parent class for media
class Media{

protected:
  char* title;
  int year;
public:
  Media(const char* newTitle, int newYear);

  virtual ~Media();//destructor
  //reutrn title and year
  char* getTitle();
  int getYear();
  //return type of media
  virtual int getType();

};

#endif

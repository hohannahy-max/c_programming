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

protected:
  char publisher[50];
  char rating[50];

public:

  char getPublisher(char publisher[20]){
    strcpy(p,publisher);
  }
  char getRating(const , char rating[20]){
    strcpy(r, rating);
  }

};





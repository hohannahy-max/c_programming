/*
Name: Hannah Ho
Project: Classes
Date: 11/8/26

 */


#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class games : public media_parent{
 public:

  void title() override{
    cout << "What's the title of the movie?" << endl;
  }
  
  char artist[100];

   void year() override{
    cout << "When did the game come out?" << endl;
  }

  char publisher[100](){
    cout << "Who is the game's publisher" << endl;

  }
  float rating(){
    cout << "What is the game's rating" << endl;

  }

};





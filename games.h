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
 public:

  void getTitle(char name[100]) override{
    cout << "What's the title of the movie?" << endl;
  }
  
  char artist[100];

   void getYear(int year) override{
    cout << "When did the game come out?" << endl;
  }

  char getPublisher(char publisher[20]){
    cout << "Who is the game's publisher" << endl;

  }
  float getRating(){
    cout << "What is the game's rating" << endl;
     return rating;
  }

};





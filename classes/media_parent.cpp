#include <iostream>
#include <cstring>
#include "media_parent.h"
using namespace std;


//title, year
class Media::Media(const char* newTitle, int newYear){
  title = new char[strlen(newTitle) + 1];
  strcppy(title, newTitle);
  year = newYear;

}
Media::~Media(){
  delete[] title;
}

char* Media::getTitle(){
  return title;

}

int Media:: getYear(){
  return year;
}

int Media::getType(){
  return 0;
}

void Media::print(){
  cout << "Title: " << title << "Year: " << year << endl;
}

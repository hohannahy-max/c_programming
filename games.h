#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class games : public media_parent{
 public:

  void title() override{
    cout << "Who's the artist?" << endl;
  }
  
  char artist[100];

   void title() override{
    cout << "Who's the publisher?" << endl;
  }

  char publisher[100];
  float rating;
};

















#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class games : public media_parent{
 protected:
  int year;
  char title[100];
  char artist[100];
  char publisher[100];
  float rating;





#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class games : public media_parent{
 protected:
  int year;
  char title[100];
  char artist[100];
  char publisher[100];
  float rating;





};





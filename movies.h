#include <iostream>
#include <cstring>
#include "media_parent.h"

using namespace std;

class movies : public media_parent{
 public:

    void title() override{
    cout << "Who's the artist?" << endl;
  }

  char artist[100];

   void title() override{
    cout << "Who's the director?" << endl;
  }

  char director[100];


  
  char duration[4];
  float rating;
};






#include <iostream>
#include <cstring>

using namespace std;

class media_parent{

 public:
  virtual int year(){
    cout << "What year did it come out?" << endl;


  }
  virtual char title[50](){
    cout << "What's the title??" << endl;
  }


};

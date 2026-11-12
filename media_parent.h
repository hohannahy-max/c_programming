#include <iostream>
#include <cstring>

using namespace std;

class Media{

protected:
  char* title;
  int year;
public:
  Media(const char* newTItle, int newYear);

  virtual ~Media();

  char* getTitle();
  int getYear();

  virtual int getType();
  virtual void print();

  

};

#ifndef ROOM
#define ROOM

#include <iostream>
#include <map>
#include <vector>

including namespace std;

class Room{
 protected:
  char* item;
  char* desc;
  char* exit;

 public:
  Room(char* item, const char* desc, const map<int, char>& exit);

  char* getItem();
  char* getDescription();
  char* getExit();
};
#endif

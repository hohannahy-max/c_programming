#include <iostream>
#include <cstring>
#include <vector>
#include "room.h"

using namespace std;
//vector of room pointers <Room*>

Room :: Room(char* item, const char* desc, const map<int, char>& exit){
  item = new char[strlen(newItem) + 1];
  strcpy(item, newItem);
  desc = new char[strlen(newTitle) + 1];
  strcpy(desc, newDesc);
  .push_back(<Room*>);


}

char* Room::getItem(){
  return item;
}

char* Room::getDescription(){
  return desc;
}
map<int, char> Room::getExit(){
  return exit;
}

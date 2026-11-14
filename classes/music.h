#ifndef MUSIC_H
#define MUSIC_H

#include "media_parent.h"

using namespace std;

class music : public Media{


private:
  char* artist;
  int duration;
  char* publisher;
  
 public:
  //initialized title, artist, year, duration, and publisher
  music(const char* newTitle, const char* newArtist, int newYear, int newDuration, const char* newPublisher);
  
  ~music() override;//destructor

  char* getArtist();
  int getDuration();
  char* getPublisher();

  int getType() override; // return type identifier (2)
};
#endif

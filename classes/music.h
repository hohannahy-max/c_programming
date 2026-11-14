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
  music(const char* newTitle, const char* newArtist, int newYear, int newDuration, const char* newPublisher);
  ~music() override;

  char* getArtist();
  int getDuration();
  char* getPublisher();

  int getType() override;
};
#endif

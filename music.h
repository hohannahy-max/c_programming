#include "media_parent.h"

using namespace std;

class music : public media_parent{


private:
  char* artist;
  int duration;
  char* publisher;
  
 public:
  Music(const char* newTitle, const char* newArtist, int newYear, int newDuration, const char* newPublisher);

  char* getArtist();
  int getDuration();
  char* getPublisher();

  int getType() override;
  int print() override;
};

//THIS IS THE MAIN cpp

#include <iostream>
#include <cstring>
#include <vector>
#include "media_parent.h"
#include "games.h"
#include "music.h"
#include "movies.h"


using namespace std;

int main()
{
  // static_cast<destination_type>()
  
  while (run == true){


    cout << "Add media, search for media, or delete an item?" << endl;
    cin.width(7);
    cin >> choice;

     if (strcmp(choice,"ADD") == 0){
       cout << "What kind of media? (games, movies, music)";
       cin >> char type[50];
       if (strcmp(type, "games") == 0){

       }
       if (strcmp(type, "movies") == 0{

	 }

	 if (strcmp(type, "music") == 0{

	   }
       static_cast<char>(games)-
    add(list);

  }

  else if (strcmp(choice,"SEARCH") == 0){
    print(list);
    cout << "Delete item (Input title or year)" << endl;
    cin>> print_input << endl;
    //add to child
    for(){
      cout << object;
    }
    //for all titles look for if not there look through year
  }
  else if (strcmp(choice,"DELETE") == 0){
    //~MyMedia(){ delete data; cout << "Destructor" << endl;};
        //for all titles look for if not there look through year then delete

  }
  else if(strcmp(choice,"QUIT") == 0) {
    cout << "Bye bye" << endl;
    run  = false;
  }
  else{
    cout<< "invalid choice. try again" << endl;
  }

  return 0;
}

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


    cout << "Add media, search for media, delete an item, or quit (add, search, delete, quit)?" << endl;
    cin.width(7);
    cin >> choice;

     if (strcmp(choice,"add") == 0){
     }
     else if (strcmp(choice, "search") == 0){

       }
     else if (strcmp(choice, "delete") == 0{

	 }

       else if (strcmp(choice, "quit")) == 0{

	   }
       else{
	 cout << "Try again"
       }

       static_cast<char>(games)-
    add(list);
       return 0;

     }


    void add(vector<Database*>& vtnew){
Database* newmed = new media
  char type[7];
 cout << "What kind of media? (games, music or movies)" << endl;
 cin >> type;

 if (strcmp(type, "games") == 0){

 }
 else if (strcmp(type, "music") == 0){

 }
 else if (strcmp(type, "music") == 0){

 }
 else{
   cout << "Please input again" << endl;
 }


    }

     void search(vector<Database*>& vtnew){
       char keyword[30];

     }

     void del(vector<Database*>& vtnew){
       char find[40];
       cout << "Type in year or title to delete media" << endl;
       cin >> find;
       static_cast<destination_type>()

	 auto it = find_if(vtnew.begin(), vtnew.end(), [find](const Student* s){
	   return;
	 }
	   if (!it =vtnew.end()){
	     delete *it;
	     vtnew.erase(it);
	     cout << "Deleted" << endl;
	   }
	   

	 
     }

     void quit(vector<Database*>& vtnew){
       running = false;
     }
	 /*

	 

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
        //for all titles look for if not the
  return 0;
}
	 */

//THIS IS THE MAIN cpp

#include <iostream>
#include <cstring>
#include <vector>
#include "media_parent.h"
#include "games.h"
#include "music.h"
#include "movies.h"


using namespace std;
void add(vector<Media*>& database);
void search(const vector<Media*>& database);
void del(vector<Media*>& database);
void print(Media* item)

int main()
{vector<Media*>& database
  // static_cast<destination_type>()
  
  while (run == true){


    cout << "Add media, search for media, delete an item, or quit (add, search, delete, quit)?" << endl;
    cin.width(7);
    cin >> choice;

     if (strcmp(choice,"add") == 0){
       add(database);
     }
     else if (strcmp(choice, "search") == 0){
       search(database);

       }
     else if (strcmp(choice, "delete") == 0{
	 del(database);

	 }

       else if (strcmp(choice, "quit")) == 0{
	   running = false;

	   }
       else{
	 cout << "Try again"
       }

       static_cast<char>(games)-
    add(list);
       return 0;

     }


    void add(vector<Media*>& database){
Database* newmed = new media
  char type[7];
 cout << "What kind of media? (games, music or movies)" << endl;
 cin >> type;

     void search(vector<Media*>& database){

       char keyword[30];
       cout << "Search by  year or title???"
	 cin >> search_term;
	 for (int i; i <= database_size; i++){
	   if (strcmp(search_term, title)== 0){
	   cout << database -> getYear();
	 }
	   if (strcmp(search_term, title)== 0){
	     cout << database -> getTitle();
	 }
	 }
     }

     void del(vector<Media*>& database){
       char find[40];
       cout << "Type in year or title to delete media" << endl;
       cin >> find;

	 auto it = find_if(vtnew.begin(), vtnew.end(), [find](const Student* s){
	   return;
	 }
	   if (!it =vtnew.end()){
	     delete *it;
	     vtnew.erase(it);
	     cout << "Deleted" << endl;
	   }
	   
 //~MyMedia(){ delete data; cout << "Destructor" << endl;};

	 
     }

     void quit(){
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


  }
  else if (strcmp(choice,"DELETE") == 0){

    //~MyMedia(){ delete data; cout << "Destructor" << endl;};
        //for all titles look for if not the
  return 0;
}
return 0;	 */


	 //before closing out prevent memory leak :D
     }

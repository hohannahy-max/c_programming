
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
{

  vector<Media*>& database;  
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


       for (size_t i = 0; i < database.size(); i++){
	 delete database[i];
	 database.clear();

       }
       

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
   cin >> search_term;
         for (int i; i <= database_size; i++){
           if (strcmp(search_term, title)== 0){
           cout << database -> getYear();
	   ~
         }
           if (strcmp(search_term, title)== 0){
             cout << database -> getTitle();
	     ~
         }
         }

    

     void quit(){
       running = false;
     }
	 
	 //before closing out prevent memory leak :D
     for (size_t i = 0; i < list.size(); i++){
       delete databse[i];
       
     }
     database.clear();
     
     

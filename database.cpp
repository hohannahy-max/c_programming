
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
  char choice[20];
  bool running = true;
  while (running){


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

       }
       database.clear();

       return 0;

     }


    void add(vector<Media*>& database){
  char type[7];
 cout << "What kind of media? (games, music or movies)" << endl;
 cin.getline(type, 20);
 char title[100];
 int year;

 if (strcmp(type, "GAME") == 0){
   char publisher[100];
   float rating;

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cout << "Enter publisher: " << endl;
   cin.geline(publisher, 100);
   cout << "Enter rating out of ten: " << endl;
   cin >> rating;

   database.push_back(new games(title, year, publisher, rating));
   cout << "added" << endl;
 }
 else if (strcmp(type, "MUSIC") == 0){
   int duration;
char publisher[100];
 char artist[100];

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cout << "Enter publisher: " << endl;
   cin.geline(publisher, 100);
    cout << "Enter artist: " << endl;
   cin.geline(artist, 100);
   cout << "Enter duration in seconds: " << endl;
   cin >> duration;

   database.push_back(new games(title, year, publisher, artist, duration));
   cout << "added" << endl;

 }
 else if (strcmp(type, "MOVIE") == 0){

 int duration;
char director[100];
 float rating;

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cout << "Enter director: " << endl;
   cin.geline(director, 100);
   cout << "Enter duration in minutes" << endl;
   cin >> duration;
   cout << "Enter rating out of 10: " << endl;
   cin >> rating;

   database.push_back(new movies(title, year, director, rating, duration));
   cout << "added" << endl;

 }
 else{
   cout < "try again" << endl;

 }
 if (!found) {
   cout << "No matches" << endl;
 }
    }


 void search(const vector<Media*>& database){
   char keyword[30];
   cout << "Search by  year or title???" << endl;
   cin.getline(keyword, 100);
   bool found = false;

   if (strcmp(search_term, title)== 0){
     char searchTitle[100];
     cout << "Enter title to search" << endl;
     cin.getline(searchTitle, 100);
     
     for (Media* item : database){
       if (strcmp(item->getTitle(), searchTitle) == 0){
       item->print();
       found =true;
     }
	 }
 }
 else if (strcmp(search_term, year)== 0){
     char searchYear[100];
     cout << "Enter title to search" << endl;
     cin.getline(searchYear, 100);
     
     for (Media* item : database){
       if(item->getYear() == searchYear){
       item->print();
       found =true;
     }
     }

   }
   
   else{
     cout << "try again" << endl;
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
     
     

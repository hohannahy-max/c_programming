/*
Name: Hannah Ho
Date: 11/13/26
Project: Classes


 */
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
void print(Media* item);

int main()
{

  vector<Media*> database;
  char choice[20];
  bool running = true;
  
  while (running){


    cout << "Add media, search for media, delete an item, or quit (add, search, delete, quit)?" << endl;
    cin.getline(choice,20);

    if (strcmp(choice,"add") == 0){
       add(database);
     }
     else if (strcmp(choice, "search") == 0){
       search(database);

       }
     else if (strcmp(choice, "delete") == 0){
	 del(database);

	 } else if (strcmp(choice, "quit") == 0){
	   running = false;
	   } else{
       cout << "Try again"<< endl;
       }

       }


       for (Media* item : database){
	 delete item;

       }
       database.clear();

       return 0;

     }
    


void add(vector<Media*>& database){
  char type[20];
  cout << "What kind of media? (games, music or movies)" << endl;
  cin.getline(type, 20);
 char title[100];
 int year;

 if (strcmp(type, "games") == 0){
   char publisher[100];
   float rating;

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cin.ignore(1000, '\n');
   cout << "Enter publisher: " << endl;
   cin.getline(publisher, 100);
   cout << "Enter rating out of ten: " << endl;
   cin >> rating;
   cin.ignore(1000, '\n');

   database.push_back(new games(title, year, publisher, rating));
   cout << "added" << endl;
 }
 else if (strcmp(type, "music") == 0){
   int duration;
char publisher[100];
 char artist[100];

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cin.ignore(1000, '\n');
   cout << "Enter publisher: " << endl;
   cin.getline(publisher, 100);
    cout << "Enter artist: " << endl;
   cin.getline(artist, 100);
   cout << "Enter duration in seconds: " << endl;
   cin >> duration;
cin.ignore(1000, '\n');
   database.push_back(new music(title,artist,  year, duration, publisher));
   cout << "added" << endl;

 }
 else if (strcmp(type, "movies") == 0){

 int duration;
char director[100];
 float rating;

   cout << "Enter title: " << endl;
   cin.getline(title, 100);
   cout << "Enter release date: " << endl;
   cin >> year;
   cin.ignore(1000, '\n');
   cout << "Enter director: " << endl;
   cin.getline(director, 100);
   cout << "Enter duration in minutes" << endl;
   cin >> duration;
   cout << "Enter rating out of 10: " << endl;
   cin >> rating;
   cin.ignore(1000, '\n');

   database.push_back(new movies(title, director, year, duration, rating));
   cout << "added" << endl;

 }
 else{
   cout << "try again" << endl;
 }
}






     void print(Media* item){

       if (item -> getType() ==1) {
	 games* g = static_cast<games*>(item);
	 cout << "Game title: " << g->getTitle()<< endl;
	 cout << "Game release year: " << g->getYear()<< endl;
	 cout << "Game publisher: " << g->getPublisher()<< endl;
	 cout << "Game rating: " << g-> getRating() << "/10" << endl;

       }else if (item -> getType() == 2) {
	 music* m = static_cast<music*>(item);
	 cout << "Music title: " << m->getTitle()<< endl;
	 cout << "Music release year: " << m->getYear()<< endl;
	 cout << "Music artist: " << m->getArtist()<< endl;
	 cout << "Music duration: " << m-> getDuration() << "s" << endl;
	 cout << "Music publisher: " << m-> getPublisher() << endl;

       }
       else if (item -> getType() == 3) {
	 movies* mo = static_cast<movies*>(item);
	 cout << "Movie title: " << mo->getTitle()<< endl;
	 cout << "Movie release year: " << mo->getYear()<< endl;
	 cout << "Movie duration: " << mo-> getDuration() << "min" << endl;
	 cout << "Movie rating: " << mo-> getRating() <<"/10" << endl;

     }
     }

       

 void search(const vector<Media*>& database){
   char keyword[30];
   cout << "Search by  year or title???" << endl;
   cin.getline(keyword, 30);
   bool found = false;

   if (strcmp(keyword, "title")== 0){
     char searchTitle[100];
     cout << "Enter title to search" << endl;
     cin.getline(searchTitle, 100);
     
     for (Media* item : database){
       if (strcmp(item->getTitle(), searchTitle) == 0){
	 print(item);
       found =true;
     }
     }
   }
 else if (strcmp(keyword, "year")== 0){
     int searchYear;
     cout << "Enter year to search" << endl;
     cin>> searchYear;
     cin.ignore(1000, '\n');
     
     for (Media* item : database){
       if(item->getYear() == searchYear){
	 print(item);
       found =true;
     }
     }

   }
   
   else{
     cout << "try again" << endl;
     return;
   }
    if (!found) {
   cout << "No matches" << endl;
 }
 }


 void del(vector<Media*>& database){
   char keyword[40];
   char searchTitle[100];
   int searchYear;

   cout << "Delete by year or title?" << endl;
   cin >> keyword;
   cin.ignore(1000, '\n');
     if (strcmp(keyword, "title")== 0){
       cout << "Enter title to delete: " << endl;
       cin.getline(searchTitle,100);
	  
         }
     else if (strcmp(keyword, "year")== 0){
       cout << "Enter year to delete: " << endl;
       cin >> searchYear;
       cin.ignore(1000, '\n');
         }
     else {

       cout << "Try again" << endl;
       return;
     }
     bool found = false;

     for (int i = static_cast<int>(database.size()) - 1; i >=0; i--){

       bool match = false;
       if (strcmp(keyword, "title") == 0 && strcmp(database[i]->getTitle(), searchTitle) == 0){
	 match = true;
       }
       else if(strcmp(keyword, "year") == 0 && database[i]->getYear() == searchYear){
	 match = true;
       }

       
       if (match) {
	 found = true;
	 cout << "Found match: ";
	 print(database[i]);

	 char confirm[10];
	 cout << "Do you want to delete this item? (yes/no)" << endl;
	 cin.getline(confirm,10);

	 if (strcmp(confirm, "yes") == 0) {
	   delete database[i];
	   database.erase(database.begin() + i);
	   cout << "Item deleted." << endl;
	 } else{
	   cout << "Item kept" << endl;
	 }

       
         }
     
     }
     if (!found){
	 cout<< "NO match found" << endl;

       }
 }

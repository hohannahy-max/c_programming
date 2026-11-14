
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

    if (strcmp(choice,"add") == 0)){
       add(database);
     }
     else if (strcmp(choice, "search") == 0)){
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

       }


       for (Media* item : database){
	 delete item;

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

       }else if (item -> getType() ==2) {
	 Music* m = static_cast<Music*>(item);
	 cout << "Music title: " << m->getTitle()<< endl;
	 cout << "Music release year: " << m->getYear()<< endl;
	 cout << "Music artist: " << m->getArtist()<< endl;
	 cout << "Music duration: " << m-> getDuration() << "s" << endl;
	 cout << "Music publisher: " << m-> getPublisher() << endl;

       }
       else if (item -> getType() ==3) {
	 Movie* mo = static_cast<Movie*>(item);
	 cout << "Movie title: " << mo->getTitle()<< endl;
	 cout << "Game release year: " << mo->getYear()<< endl;
	 cout << "Game duration: " << mo-> getDuration() << "min" << endl;
	 cout << "Game rating: " << mo-> getRating() <<"/10" << endl;

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
   searchTitle[100];
   int searchYear;

   cout << "Delete by year or title?" << endl;
   cin >> keyword;
     if (strcmp(keyword, "title")== 0){
       cout << "Enter title to delete: " << endl;
       cin.getline(searchTitle,100);
	   ~
         }
     else if (strcmp(keyword, "year")== 0){
       cout << "Enter year to delete: " << endl;
       cin >> searchYear;
         }
     else {

       cout << "Try again" << endl;
       return;
     }
     bool found = false;

       
         }
     

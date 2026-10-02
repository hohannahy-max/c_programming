/*
Name: Hannah Ho
Project: Student List
Date: 10/9/26


Your program should have a vector of struct pointers passed by reference, or a vector pointer (which will point to a vector of struct pointers). (20 points)

 */

#include <iostream>
using namespace std;

struct Student
{
  char f_name[30];
  char l_name[30];
  int id;
  float gpa;
};



void add()
{
  cout << "Student first name?" << endl;
  cout<< "Student last name?" << endl;
  cout << "student id?" << endl;
  cout << "student gpa?" << endl;

}
 
char print(){
  for (struct Student){
    cout <<
  }


}

void del(){

}

void quit(){
  if (input == "quit"){

    return 0;
  }

}


int main()
{
  cout<< "Do you want to read in students, print them out, delete them, or quit? (ADD, PRINT, DELETE QUIT)" << endl;

												 char choice[7];
												 cin >> choice;
  if (choice == "ADD"){
    add();

  }
  else if (choice == "PRINT"){
    print();

  }
  else if (choice == "DELETE"){
    del();

  }
  else{
    quit();
  }
  return 0;
}

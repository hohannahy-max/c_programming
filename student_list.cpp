/*
Name: Hannah Ho
Project: Student List
Date: 10/9/26


Your program should have a vector of struct pointers passed by reference, or a vector pointer (which will point to a vector of struct pointers). (20 points)

 */

#include <iostream>
#include <vector>

using namespace std;


struct Student
{
  char f_name[30];
  char l_name[30];
  int id;
  float gpa;
};


void add(vector<Student> &vtnew)
{
  cout << "Student first name?" << endl;
  cin >> newstu.f_name;
  cout<< "Student last name?" << endl;
  cin >> newstu.l_name;
  cout << "student id?" << endl;
  cin >> newstu.id;
  cout << "student gpa?" << endl;
  cin >> newstu.gpa;

  vtnew.push_back(newstu);
  
    }
  
 
char print(){ /*
  for (struct Student){
    for (int = i = 0; i < struct Student; i++){
      cout << Student[i]
    }
	      */
  return 0;
  //}


}

void del(){
  cout << "What is the ID of the student you want to delete" << endl;
  cin >> id_find;

  
  //vec.erase
}
void quit(){
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

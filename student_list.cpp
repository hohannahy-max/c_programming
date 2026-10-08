/*
Name: Hannah Ho
Project: Student List
Date: 10/9/26

*/

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


struct Student
{
  char f_name[30];
  char l_name[30];
  int id;
  float gpa;
};


void add(vector<Student>& vtnew)
{
  Student newstu;
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
  
 
char print(vector<Student>& vtnew){
  cout << "student info" << endl;
 
  for (int i = 0; i < vtnew.size <(); ++i){
    cout << vtnew[i].f_name << vtnew[i].l_name << "," << vtnew[i].id << "," << vtnew[i].gpa<< endl;
  
  
    
  }


}


int del(){
  cout << "What is the ID of the student you want to delete" << endl;
  cin >> id_find;
  auto it = find_if(vtnew.begin(), vtnew.end(), [](int n)) {
    return;
  }

    if (it!= vtnew.end()){
      cout << "Deleted" << endl;
    }
  
}
    
int main()
{
  vector<Student> list;
  cout<< "Do you want to read in students, print them out, delete them, or quit? (ADD, PRINT, DELETE QUIT)" << endl;
  
												 char choice[7];											 cin >> choice;
  if (choice == "ADD"){
    add(list);

  }
  else if (choice == "PRINT"){
    print(list);

  }
  else if (choice == "DELETE"){
    del();

  }
  else if(choice == "quit") {
    return 0;
  }
  else{
    cout<< "invalid choice. try again" << endl;
  }
  return 0;
}

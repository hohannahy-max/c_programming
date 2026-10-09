/*
Name: Hannah Ho
Project: Student List
Date: 10/9/26

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>


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
  
 
char print(const vector<Student>& vtnew){
  cout << "student info" << endl;
 
  for (size_t i= 0; i < vtnew.size (); ++i){
    cout << vtnew[i].f_name << vtnew[i].l_name << "," << vtnew[i].id << "," << vtnew[i].gpa<< endl;
  
  
    
  }


}


int del(){
  int id;
  cout << "What is the ID of the student you want to delete" << endl;
  cin >> id_find;
  auto it = find_if(vtnew.begin(), vtnew.end(), [id_find](const Studnet& s) {
    return s.id == id.find;
  }

    if (it!= vtnew.end()){
      vtnew.erase(it);
      cout << "Deleted" << endl;
    } else {
      cout << "ID not found" << endl;

    }
  
}
    
int main()
{
  vector<Student> list;
  cout<< "Do you want to read in students, print them out, delete them, or quit? (ADD, PRINT, DELETE QUIT)" << endl;
  
												 char choice[7];											 cin >> choice;
												 if (strcmp(choice,"ADD")> 0){
    add(list);

  }
  else if (strcmp(choice,"PRINT")> 0){
    print(list);

  }
  else if (strcmp(choice,"DELETE")> 0){
    del(list);

  }
  else if(strcmp(choice,"DELETE") >0) {
    cout << "Bye bye" << endl;
    return 0;
  }
  else{
    cout<< "invalid choice. try again" << endl;
  }
  return 0;
}

/*
Name: Hannah Ho
Project: Student List
Date: 10/9/26

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iomanip>


using namespace std;


struct Student
{
  char f_name[30];
  char l_name[30];
  int id;
  float gpa;
};

<<<<<<< HEAD
//keeps the command line from repeatedly printing out stuff when you input a wrong data type
void clear_input(){
  cin.clear();
  cin.ignore(1000,'\n');
}

void add(vector<Student*>& vtnew)
=======
//by reference
void add(vector<Student>& vtnew)
>>>>>>> 73b2846dc3df393b948476493306354908f42d86
{
  //allocates memory for new student
  Student* newstu = new Student;
  cout << "Student first name?" << endl;
  cin >> newstu->f_name;
  cout<< "Student last name?" << endl;
  cin >> newstu->l_name;
  cout << "student id?" << endl;
  cin >> newstu->id;
  while (cin.fail()){
    clear_input();
    cout << "Try again"<< endl;
    cout<< "student id?"<< endl;
      cin >> newstu -> id;
  }
  cout << "student gpa?" << endl;
<<<<<<< HEAD
  cin >> newstu->gpa;
   while (cin.fail()){
    clear_input();
    cout << "Try again"<<endl;
    cout << "student gpa?";
      cin >> newstu -> gpa;
  }
   //add student pointer to vector
  vtnew.push_back(newstu);
  
    }


void print(const vector<Student*>& vtnew){
=======
  cin >> newstu.gpa;

  vtnew.push_back(newstu); //adds new struct to vector
  
    }

//Goes through structs in vector and prints them out
void print(const vector<Student>& vtnew){
>>>>>>> 73b2846dc3df393b948476493306354908f42d86
  cout << "student info" << endl;

  //goes through each pointer in vector and prints student info out
  for (size_t i= 0; i < vtnew.size (); ++i){
<<<<<<< HEAD
    cout << vtnew[i]->f_name << " " <<  vtnew[i]->l_name << "," << vtnew[i]->id << ","<<fixed << setprecision(2) << vtnew[i]->gpa<< endl;
=======
    cout << vtnew[i].f_name << " " <<  vtnew[i].l_name << ", " << vtnew[i].id << ", " << vtnew[i].gpa<< endl;
>>>>>>> 73b2846dc3df393b948476493306354908f42d86
  
  
    
  }


}


void del(vector<Student*>& vtnew) {
  int id_find;
  cout << "What is the ID of the student you want to delete" << endl;
  cin >> id_find;
  while (cin.fail()){
    clear_input();
    cout <<"try again" <<endl;
    cout << "What is the ID of the student you want to delete"<<endl;
    cin >> id_find;
  }
  //looks for student with requested id
  auto it = find_if(vtnew.begin(), vtnew.end(), [id_find](const Student* s) {
    return s->id == id_find;
  });
<<<<<<< HEAD
  //if student found delete, else print out 'not found'
=======

  //if the id is found
>>>>>>> 73b2846dc3df393b948476493306354908f42d86
    if (it!= vtnew.end()){
      delete *it;
      vtnew.erase(it);
      cout << "Deleted" << endl;
    }
    // if the id is not
    else {
      cout << "ID not found" << endl;

    }
  
}
    
int main()
{
  //makes vector that stores points to student structs
  vector<Student*> list;
  bool run = true;


  //choice list
												 while (run == true) {
												   												 char choice[7];

			 cout<< "Do you want to read in students, print them out, delete them, or quit? (ADD, PRINT, DELETE or QUIT)" << endl;
			 cin.width(7);
 cin >> choice;


			 if (strcmp(choice,"ADD") == 0){
    add(list);

  }
  else if (strcmp(choice,"PRINT") == 0){
    print(list);

  }
  else if (strcmp(choice,"DELETE") == 0){
    del(list);

  }
  else if(strcmp(choice,"QUIT") == 0) {
    cout << "Bye bye" << endl;
    run  = false;
  }
  else{
    cout<< "invalid choice. try again" << endl;
  }
												 }
												 //deletes remaing pointers and students before ending program
												 for (size_t i = 0; i < list.size();++i)
												   {
												     delete list[i];										   }
												 list.clear();
  return 0;
										  
}

		

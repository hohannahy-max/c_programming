/*
Project: Guessing Game
Name: Hannah Ho
Date:9/14/26

1. No global variables.
2. No strings
3. You should include <iostream> not stdio and use "new" and "delete" instead of "malloc" and "free"
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




int main(){

  srand(time(NULL));
  char reset = 'y';
  while (reset == 'y') {
    int randNum = rand() % 101;
    int input;
    int guesses = 0;
    bool correct = false;

  


  while (!correct){
    cout << "enter guess 1-100" << endl;
    cin >> input;
    guesses += 1;

    if (input > randNum){
      cout << "You're too high"<<endl;
    } else if (input < randNum){
	cout << "You're too low" << endl;
      } else {
	cout << "You're correct it took you " << guesses << " guesses" <<  endl;
	correct = true;

      }
 

    }

    cout << "Do you want to play again(y/n)" << endl;
    cin >> reset;

  }


  return 0;

  
}

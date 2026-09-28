#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main(){
  char str[81]; // array to write in
  char clean[81]; //array to write string w/o punctuation and same case.
  char reverse[81]; //array to write reverse in
  cin.get(str,81);
  

  
  //Get rid of spaces and punctuation and make same case
  int len = 0;
  for (int i =0;str[i] != '\0'; i++){
    if (isalnum(str[i]))
      {
      clean[len] =  tolower(str[i]);
      len++;

      }


     }
clean[len] = '\0';
  
// reverse
for (int i = 0; i < len; i++){
reverse[i] = clean[len - 1 -i];
}
reverse[len] = '\0';

  if (strcmp(clean, reverse) == 0){
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;


  }
  return 0;
}


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main(){
  char str[81]; // array to write in
  char clean[81]; //array to write clean string in
  char reverse[81];// reversed string
  cin.get(str,81);
  

  
  //Get rid of spaces and punctuation and make same case
  int len = 0;
  for (int i =0;str[i] != '\0'; i++){
 //put in each character until  
    if (isalnum(str[i]))
      {
      clean[len] =  tolower(str[i]);
      len++;

      }


     }
clean[len] = '\0';
//make reverse
for (int i = 0; i < len; i++){
reverse[i] = clean[len - 1 -i];
}
revers[len] = '\0';

//print out if palindrome or not
  if (strcmp(clean, reverse) == 0){
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;


  }
  return 0;
}

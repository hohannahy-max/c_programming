#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main(){
  char str[80]; // array to write in
  char str2[80]; //array to write reverse in
  cin.get(str,80);

  

    /*
  //Get rid of spaces and punctuation and make same case
  for (int i =0, len = strlen(str); i <len; i++){

  put in each character until  
    if (isalpha(str[i]) == 0)
      {
	str.erase(i--,1);
	len = strlen(len);

      }
     if (isspace(str[i]) == 1){


     }


  }


   strcpy(str2, str);
  */
  cout << str << endl;

  if (strcmp(str, str2) == 0){
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;


  }
  return 0;
}

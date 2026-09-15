#include <iostream>
#include <cstring>
using namespace std;



int main(){
  char str[80];
  cin >> str;
  for (int i =0, len = strlen(str); i <len; i++){
    if (ispunct(str[]))
      {
	str.erase(i--,1);
	len = strlen(len);

      }


  }
  cout << str;
  /*
  bool palindrome = false;

  if (palindrome == true){
    cout << "Palindrome";
  }
  */
  return 0;
}

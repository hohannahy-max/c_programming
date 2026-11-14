/*

#include <cstring>
#include <iostream>

using namespace std;


int main(){
  char phrase[500];
  cout << "Give me a phrase" << endl;
  cin.getline(phrase, 500);

  int word_len = strlen(phrase);
  for (int i = 0; i <word_len; i++){
    if (phrase[i] != ' '  && phrase[i +1] != ' '&& phrase[i +1] != '\0'){
      if (i == 0 || phrase[i-1] == ' '){
	char temp = phrase[i];
	phrase[i] = phrase[i+1];
	  phrase[i + 1] = temp;

	
      }
      
  }
  }

  cout << phrase <<endl;
    return 0;
}
*/

/*
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char phrase[500];
  cout << "Give me a phrase" << endl;
  cin.getline(phrase, 500);
    int word_len = strlen(phrase);
   int  start = 0;
    for (int i = 0; i <= word_len; i++){
      if (phrase[i] == ' '|| phrase[i] == '\0'){
	int end = i-1;
	if (end > start){
	  char temp = phrase[start];
	  phrase[start] = phrase[end];
	  phrase[end] = temp;

	}
	start = i+1;
      }
    }
    cout << phrase;

    return 0;
}
*/

#include <cstring>
#include <iostream>

using namespace std;

int main(){
  char phrase[500];
  cout << "Give me aphrase" << endl;
  cin.getline(phrase,500);
 int  length = strlen(phrase);
  cout << "Give me a letter to kill" << endl;
  char character;
  cin >> character;

  for (int i = 0; i <= length; i++){
    if (phrase[i] == character && phrase[i] != ' '){
      for (int j = i; j < length; j++){
	phrase[j] = phrase[j+1];

      }
      length--;
      i--;
  }
  }
 cout << phrase;
  return 0;
}



  

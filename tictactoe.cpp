/*
Name: Hannah Ho
Date: 9/26/26
Project: TicTacToe
 */


//assign the alphabets and numbers to each square

#include <iostream>
using namespace std;


int main(){
  cout << "Player one choose your move (ex: 1a, 2b, 3c, 2b)" << endl;
  char move[2];
  cin >> move;
  bool current_player = true; //player 1


  if (current_player == true){
    current_player = false;

  }
  {
    current_player = true;

  }
  // board here
    
  char board[4][4];
  board[0][0] = 'p';
  board[1][0] = 'a';
  board[2][0] = 'b';
  board[3][0] = 'c';
  cout << board<< endl;

  /*
  //initalize playyer and score
  int player1_win = 0;
  int player2_win = 0;

  if (move == 1a)
  {

  }
  elif (move == 1b)
  {


  }
  */
  return 0;
}
/*


void reset(){

  char board[4][4];
  char current_player = 'X'; //player 1




}

float check_move()
{



}


float check_win()
{

  char winner = current_player ;
  if(winner = 'X')
  {
    player1_win++;
    reset();
  }
  else
  {
    player2_win++;
    reset();
  }

  return;
}
*/

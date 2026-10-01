/*
Name: Hannah Ho
Date: 9/26/26
Project: TicTacToe
 */


//assign the alphabets and numbers to each square

#include <iostream>
using namespace std;

char board[4][4];
bool current_player = true;
int player1_win = 0;
int player2_win = 0;


void reset(){
  
  char board[4][4];
  board[0][0] = ' ';
  board[1][0] = 'a';
  board[2][0] = 'b';
  board[3][0] = 'c';
  board[0][1] = '1';
  board[0][2] = '2';
  board[0][3] = '3';
  for(char i = 0; i <4; i++){
    for(char j = 0; j <4; j++){
      cout<< board[i][j]        ;

    }
    cout<<endl;
  }


  bool current_player = true; //player 1
}




void draw_board(){

 for(char i = 0; i <4; i++){
    for(char j = 0; j <4; j++){
      cout<< board[i][j] ;

    }
    cout<<endl;
  }

}


bool check_move(char col, char row)
{
  if (col < '1'|| col > '3'){
    return false;
  }

  if (row < 'a' || row > 'c'){
    return false;
  }

  int c = col -'0';
  int r = row - 'a'+ 1;

  return board[r][c] == ' '

}



void add_move(char col, char row){
  int c = col - '0';
  int r = row + 'a';

  if (){
    current_player = true;
    board[r][c] = 'X'

  }else{
    board[r][c] = 'O';

  }


}

bool check_win(){


}


bool board_full(){


}


int main(){
  reset();
  draw_board();

  
  if (current_player == true){
          cout << "Player one choose your move (ex: 1a, 2b, 3c, 2b)" << endl;

    }
  else{
      cout << "Player two  choose your move (ex: 1a, 2b, 3c, 2b)" << endl;

  }
  char move[2];
  cin >> move;

  

  if (current_player == true){
    current_player = false;

  }
  {
    current_player = true;

  }

  return 0;
}




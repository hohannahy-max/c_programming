/*
Name: Hannah Ho
Date: 9/26/26
Project: TicTacToe
 */


//assign the alphabets and numbers to each square

#include <iostream>
using namespace std;

char board[4][4];
bool current_player = true;//player 1
int player1_win = 0;
int player2_win = 0;



// resets board and sets player as player 1
void reset(){
  
  board[0][0] = ' ';
  board[1][0] = 'a';
  board[2][0] = 'b';
  board[3][0] = 'c';
  board[0][1] = '1';
  board[0][2] = '2';
  board[0][3] = '3';
  for(char i = 1; i <4; i++){
    for(char j = 1; j <4; j++){
      board[i][j] = ' '      ;

    }
  }
  current_player = true;

}



// output board on command line
void draw_board(){

 for(char i = 0; i <4; i++){
    for(char j = 0; j <4; j++){
      cout<< board[i][j] ;

    }
    cout<<endl;
  }

}


// verifies that input is within column and row limit and the spot is empty
bool check_move(char row, char col)
{
  if (col < '1'|| col > '3'){
    return false;
  }

  if (row < 'a' || row > 'c'){
    return false;
  }

  int c = col -'0';
  int r = row - 'a'+ 1;

  return board[r][c] == ' ';

}


//draws move on board
void add_move(char row, char col){
  int c = col - '0';
  int r = row -'a'+1;

  if (current_player == true){
    board[r][c] = 'X';

  }else{
    board[r][c] = 'O';

  }


}



bool check_win(char s){
  for (int i = 1; i < 4; i++){
    if (board[i][1] == s && board[i][2] == s && board[i][3] ==s){
      return true; // col
    }
    if (board[1][i] == s && board[2][i] == s && board[3][i] ==s){
      return true; //row
    }
  }
  
    if (board[1][1] == s && board[2][2] == s && board[3][3] == s){
      return true; //diagonal 1
    }
    if (board[1][3] == s && board[2][2] == s && board[3][1] == s){
      return true; //diagonal 2
    }
    return false; //no win							   
 

}

//for when it's a tie
bool board_full(){
  for (int i = 1; i < 4; i++){
    for(int j = 1; j < 4; j++){
      if (board[i][j] == ' '){
	return false;
      }
    }
  }
  return true;

}


int main(){
  reset();
  draw_board();

  while (true){
  if (current_player == true){
          cout << "Player one choose your move (ex: 1a, 2b, 3c, 2b)" << endl;

    }
  else{
      cout << "Player two  choose your move (ex: 1a, 2b, 3c, 2b)" << endl;

  }

  
  char col, row = ' ';
  cin >> col;
  cin >> row;



  if (!check_move(row,col)){
      cout << "invalid move." << endl;
      continue;

    }

    add_move(row,col);
    draw_board();
    char symbol;
    if (current_player ==  true){
      symbol = 'X';
    }else{

      symbol = 'O';
    }


    
    if (check_win(symbol)){
      
      if (current_player){
	player1_win++;
	cout << "player one wins" << endl;
      }
      else
	{
	player2_win++;
	cout << "player two wins"<< endl;
      }
      cout << "Player one: " << player1_win << " Player two: " << player2_win<< endl;
    reset();
    draw_board();
    }
    else if (board_full())
      {
      cout << "it's a tie!" << endl << endl;
      reset();
      draw_board();
    }
    
    else
      {
	current_player =! current_player; //change player
    }
 
}
  return 0;
}









/**************************************************
**Name: Michael Patson
**Date: November 26th, 2017
**Tic-Tac-Toe Project
**This is the Constructor file for the board(tic tac toe #)
**************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

enum GameStatus {X_WON, O_WON, DRAW, UNFINISHED};
class Board
{
//makes a 3 by 3 board    
char board[3][3];

public:
Board();
int totalTurns;
bool makeMove(int row, int col, char turn);//takes row column x or y
int gameState();
void print();
};

#endif
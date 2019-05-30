/**************************************************
**Name: Michael Patson
**Date: November 26th, 2017
**Tic-Tac-Toe Project
**This is the definition of function file for the board(tic tac toe #)
**************************************************/

#include "Board.hpp"
#include <iostream>


using namespace std;
//default constructor board filled with " " char
Board::Board()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = ' ';
        }
    }
  
    totalTurns = 0;
}
bool Board::makeMove(int x, int y, char turn)
{
  
    //for the x-player
    if (turn == 'x')
    {
    //is the board blank at the spot and is x or o not there
        if (board[x][y] == ' ' && board[x][y] != 'o')//&& board[x][y] != 'x' )
        {
            //then set that spot to x
            board[x][y] = 'x';
            return true;
        }
    }
    // for the o player
    else if (turn == 'o')
    {
        // is the board blank at the spot and is the x or o not there
        if (board[x][y] == ' ' && board[x][y] != 'o')//&& board[x][y] != 'x' )
        {
            // then set that spot to o
            board[x][y] = 'o';
            return true;
        }
    }
    // if spot is not blank and has an x or y
    else
    {
        return false;
    }
  
    return 0;
}

int Board::gameState()
{
    totalTurns = 0;
  
    // chech for board winner in all directions
    for (int i = 0; i < 3; i++)
    {
        // do the values have a winner in any direction
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]) ||
            (board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        {
            // if the values match, do we have a winnter of x or o____>first check x
            if ((board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') ||
                (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') ||
                (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') ||
                (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x'))
            {
                //x has three in a row, tic tac toe
                return X_WON;
            }
            // Checks if o is the winner
            else if ((board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') ||
                     (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') ||
                     (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') ||
                     (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o'))
            {
                // o is the winner
                return O_WON;
            }
        }
    }
        //when each position is filled on the board
        if (totalTurns == 9)
        {
            // No more moves
            return DRAW;
        }
        else
        {
            // no winner, continue
            return UNFINISHED;
        }
  
    return 0;
}

// prints out current status of game
void Board::print()
{
    cout << endl << " " << "0" << " " << "1" << " " << "2" << endl;
    cout << "0" << " " << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
    cout << "1" << " " << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
    cout << "2" << " " << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}
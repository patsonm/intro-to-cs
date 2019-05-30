/**************************************************
**Name: Michael Patson
**Date: November 26th, 2017
**Tic-Tac-Toe Project
**This is the defintion file reader of tictactoe, calls baord class....
**************************************************/



#include "T3Reader.hpp"
#include <cctype>
#include <iostream>
#include <fstream>

using namespace std;
T3Reader::T3Reader(char first)
{
    currentPlayer = tolower(first);
}

bool T3Reader::readGameFile(string filename)
{
    ifstream inputfile(filename.c_str());
    
    if(!inputfile.is_open())
    {
        cout << "Error opening file: " << filename << endl;
        return false;
    }

    int row, col;

    while(inputfile >> row >> col)
    {
        cout << "Current Player : " << currentPlayer << " moves: " << row << "," << col << endl;

        if(board.gameState() != UNFINISHED) //game is over but files has more moves
        {
            cout << "Players has won but there are more moves in the game file!"<< endl;
            inputfile.close();
            return false;
        }
        
        if(!board.makeMove(row, col, currentPlayer))
        {
            cout << "Board position is already used " << row << "," << col << endl;
            inputfile.close();
            return false;
        }
    else
        {
        if(currentPlayer == 'x')
            {currentPlayer = 'o';}
        else
            {currentPlayer = 'x';}
        
        board.print();
        }
    }
    inputfile.close();
    board.print();
    if(board.gameState() == UNFINISHED)
    {
        cout << "Game is not over. Too few moves" << endl;
            return false;
    }

if(board.gameState() == X_WON)
{
    
    cout << "X'es won!" << endl;
}
    
else if(board.gameState() == O_WON)
{
    cout << "O'ers won!" << endl;
}
else
{   
    cout << "It's a draw" << endl;
}
return true;
    

}

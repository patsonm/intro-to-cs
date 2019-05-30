/**************************************************
**Name: Michael Patson
**Date: November 26th, 2017
**Tic-Tac-Toe Project
**This is the Constructor file reader of tictactoe, calls baord class....
**************************************************/



#ifndef T3READER_HPP
#define T3READER_HPP
#include "Board.hpp"

#include <iostream>
using namespace std;
class T3Reader
{
    Board board;
    char currentPlayer;
    public:
    T3Reader(char first);
    bool readGameFile(string filename);

};

#endif
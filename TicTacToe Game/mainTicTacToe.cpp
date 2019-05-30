/**************************************************
**Name: Michael Patson
**Date: November 26th, 2017
**Tic-Tac-Toe Project
**This is main method for the tic tac toe class
**************************************************/



#include "Board.hpp"
#include "T3Reader.hpp"
#include <iostream>
int main()
{
char firstPlayer;
string filename;
  
cout << "Enter the first player's character (x or o): " <<endl;
cin >> firstPlayer;
  
cout << "Enter the file name containing game moves(HINT inut.txt): " <<endl;
cin >> filename;
  
T3Reader reader(firstPlayer);
reader.readGameFile(filename);

}

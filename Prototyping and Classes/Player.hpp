/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c hpp player
*********************************************************************/ 

//defines the contructor of the player class

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player 
{
    private:
    std::string name;
    int points, rebounds, assists;
    
    public:
    
    Player();
    Player(std::string, int, int, int);
    std::string getName();
    void setPoints(int);
    int getPoints();
    void setRebounds(int);
    int getRebounds();
    void setAssists(int);
    int getAssists();
    
}
#endif
/********************************************************************* 
** Author: Michael Patson
** Date: October 5, 2017
** Description: Assignment 3b cpp taxi
*********************************************************************/ 

#include <iostream>
#include "Taxicab.hpp"
#include <cmath>

//default constructor
Taxicab::Taxicab()
{
    xCoord = 0;
    yCoord = 0;
    travelDist = 0; 
}

Taxicab::Taxicab(int xIn, int yIn)
{
    xCoord = xIn;
    yCoord = yIn;
    travelDist = 0;
}
    
int Taxicab::getXCoord()
{
    return xCoord;
}
    
int Taxicab::getYCoord()
{   
    return yCoord;
}
    
int Taxicab::getDistanceTraveled()
{
    return travelDist;
}
    
void Taxicab::moveX(int moveX)
{
    travelDist = travelDist + std::abs(moveX);
    xCoord = xCoord + moveX;
}

void Taxicab::moveY(int moveY)
{
    travelDist = travelDist + std::abs(moveY);
    yCoord = yCoord + moveY;
}
/********************************************************************* 
** Author: Michael Patson
** Date: October 5, 2017
** Description: Assignment 3b hpp taxi
*********************************************************************/ 


#ifndef TAXICAB_HPP
#define TAXICAB_HPP

#includ 
//Defines the interface of the taxi Class

class Taxicab
{ 
    private:
        int xCoord;
        int yCoord;
        int travelDist;
    
    
    public:
    Taxicab();
    Taxicab(int, int);
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    void moveX(int);
    void moveY(int);

};
#endif
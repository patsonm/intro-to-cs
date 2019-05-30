/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.f hailstone
*********************************************************************/ 

#include <iostream>

int hailstone(int start)
{
    int steps=0;
    
    while (start !=1)
    {
        //check for even
        steps++;
        if (start % 2==0)
        {
        start = start / 2;        
        }
        
        else 
        {
        start = start * 3 + 1;
        }
    }
    //return steps
    return steps;
}
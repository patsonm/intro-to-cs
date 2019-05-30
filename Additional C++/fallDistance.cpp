/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.d gravity
*********************************************************************/ 

#include <iostream>
#include <math.h>

double
fallDistance (double time)
    {
        double fallDistance, gravity = 9.8;
        //calculate fall
        fallDistance = (gravity * pow (time, 2.0)) / 2;
        
        return fallDistance;
    }
    
/*int main ()
{
    double distance, inputTime = 3.2;
    
    distance = fallDistance (inputTime);
    std::cout << distance;
    
    return 0;
}
*/
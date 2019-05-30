/********************************************************************* 
** Author: Michael Patson
** Date: October 22, 2017
** Description: Assignment 5a Person search
*********************************************************************/ 



#include <iostream>
#include <string>
#include "Person.hpp"
#include <vector>



int personSearch(const std::vector<Person> sPeople, std::string inputName) 
{
    int first = 0;
    int last = sPeople.size()-1;
    int middle;
    int position =-1;
    bool found = false;
    
    while (!found && first <=last)
    {
        middle= (first+last)/2;
        if (inputName == sPeople[middle].getName())
        {
            found=true;
            position=middle;
        }
        else if (inputName < sPeople[middle].getName())
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return position;
}

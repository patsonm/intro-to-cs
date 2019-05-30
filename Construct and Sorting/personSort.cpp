/********************************************************************* 
** Author: Michael Patson
** Date: October 23, 2017
** Description: Assignment 5b Sorts an array of persons from person class using a bubble sort
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Person.hpp"


//function prototypes

void personSort(Person array[], int size)
{
    Person temp("",-1);
    bool madeAswap;
    
    do
    { madeAswap=false;
        for ( int count = 0 ; count < (size -1); count++)
        {
            if (array[count].getAge()<array[count + 1].getAge())
            {
                temp = array[count];
                array[count]=array[count+1];
                array[count+1]=temp;
                madeAswap = true;
            }
        }
    
    
    
    } while (madeAswap);
}



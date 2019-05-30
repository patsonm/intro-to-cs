/********************************************************************* 
** Author: Michael Patson
** Date: October 27, 2017
** Description: Assignment 6a: A recursive function na,ed summer that
                takes two parameters, array and size, and returns sum
*********************************************************************/ 

#include<iostream>
using namespace std;


//Declaration
double summer(double Array[], int size);



//Func Definition
double summer(double Array[],int size)
{
    if (size > 0)
    return Array[size-1] + summer(Array, (size-1));
    else
        return 0;
}
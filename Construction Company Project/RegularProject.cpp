/****************************************************
Michael Patson
Homeworkd 8B
November 10th, 2017

Descrition: These function define the regular project
class and is derived from customerproject
****************************************************/

#include <iostream>
#include <cstdlib>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"

/****************************************************
Description: RegularProject constructor. Uses base class
constructor.
Parameters: double hours, double material cost, double transportation
cost
****************************************************/
RegularProject::RegularProject(double hours, double materials, double transportation) : CustomerProject(hours, materials, transportation)
{ 
    
}


/****************************************************
Description: Override function for base class BillAmount. 

Returns the sum of hours times 80, materials, and transportation.
****************************************************/
double RegularProject::billAmount()const
{
   return ((this->getHours()*80)+(this->getMaterials())+(this->getTransportation()));
}
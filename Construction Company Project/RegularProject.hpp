/****************************************************
Michael Patson
Homeworkd 8B
November 10th, 2017

Descrition: This Outlines the Function Definitions 
for the regular project class and is derived from customer
project
****************************************************/

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"

class RegularProject : public CustomerProject
{
public:
   RegularProject(double, double, double);
   
   double billAmount()const;

};
#endif
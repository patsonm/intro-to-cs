/****************************************************
Michael Patson
Homeworkd 8B
November 10th, 2017

Descrition: This Outlines the Function Definitions 
for the Preferred Project Class"
****************************************************/

PreferredProject.hpp

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject : public CustomerProject
{
public:
   PreferredProject(double, double, double);
   double billAmount()const;
};
#endif
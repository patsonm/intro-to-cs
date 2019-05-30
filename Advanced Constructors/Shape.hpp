/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  the shape class (parent of cicle square triangle rectangle)
*******************************************************/


#include<iostream>
using namespace std;



#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
    public:

    virtual double area() = 0;
    virtual double perimeter() = 0;
        
};
#endif
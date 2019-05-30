/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  CIRCLE::Child class of shape.hpp
*******************************************************/

#include "Shape.hpp"

#include<iostream>
using namespace std;

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle:public Shape

{
    private:
    double radius;
    public:
    Circle(double);
    void setRadius(double);
    double area();
    double perimeter();
    
    
}; 

#endif
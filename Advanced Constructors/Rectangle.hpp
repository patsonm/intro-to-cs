/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  Rectangle::Child class of shape.hpp
*******************************************************/



#include "Shape.hpp"

#include<iostream>
using namespace std;

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle:public Shape
{
    protected:
    double width, length;
    
    public:
    Rectangle(double, double);
    void setWidth(double);
    void setHeight(double);
    double area();
    double perimeter();
   
};
#endif

/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  Rectangle::Child class of shape.hpp
*******************************************************/



#include "Shape.hpp"
#include "Rectangle.hpp"

#include<iostream>
using namespace std;

#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square:public Rectangle
{
    
    public:
    Square(double);
    void setWidth(double);
    void setLength(double);
    double area();
    double perimeter();
   
};
#endif

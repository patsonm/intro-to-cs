/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  This defines Rectangle::Child class of shape.hpp
*******************************************************/


#include <iostream>
#include "Shape.hpp"
#include "Rectangle.hpp"

using namespace std;

//defaut constructer takes legth and width

Rectangle::Rectangle(double width, double length)
    {
        this->width=width;
        this->length=length;
    }
//sets width
void Rectangle::setWidth(double iwidth)
    {
    width=iwidth;
    }

//sets height
void Rectangle::setHeight(double ilength)
    {      
    length=ilength;
    }

//gets the area 
double Rectangle::area()
    {
    return width*length;
    }


//gets the perimeter
double Rectangle::perimeter()
    {
    return width+width+length+length;
    }


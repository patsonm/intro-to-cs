/********************************************************************* 
** Author: Michael Patson
** Date: October 5, 2017
** Description: Assignment 3a box.cpp
*********************************************************************/ 

#include <iostream>
#include "Box.hpp"

Box::Box()
{
    setHeight(1);
    setWidth(1);
    setLength(1);
}

Box::Box(double HeightIn, double WidthIn, double LengthIn)
{
    setHeight(HeightIn);
    setWidth(WidthIn);
    setLength(LengthIn);
}

void Box::setHeight(double HeightIn)
{
    b_height = HeightIn;
}

void Box::setWidth(double WidthIn)
{
    b_width = WidthIn;
}
   
void Box::setLength(double LengthIn)
{
    b_length = LengthIn;
}
    
double Box::calcVolume()
{
    return b_height * b_width * b_length;
}

double Box::calcSurfaceArea()
{
    double lengthwidth, heightwidth, lengthheight;
    lengthwidth = b_length * b_width;
    heightwidth = b_height * b_width;
    lengthheight =  b_length * b_height;
    return 2 * (lengthwidth + heightwidth + lengthheight);
}
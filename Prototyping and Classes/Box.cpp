
#include <iostream>
#include "Box.hpp"



//create a box, not negative or 0 values
Box::Box()
{
    setHeight(1);
    setLength(1);
    setWidth(1);
}
Box::Box(double height, double width, double length)
{
    if (height > 0)
    {b_height = height;}
    else
    {b_height = 1;}
    
    if (width > 0)
    {b_width = width;}
    else
    {b_width = 1;}    
    
    if (length > 0)
    {b_length = length;}
    else
    {b_length = 1;}
        
}

//calculate the volume
double Box::calcVolume()
{
    return b_height * b_width * b_length;
}

//calculate surface area, 6 sides 2 duplicates
double Box::calcSurfaceArea()
{
    double lengthwidth, heightwidth, lengthheight;
    lengthwidth = b_length * b_width;
    heightwidth = b_height * b_width;
    lengthheight =  b_length * b_heigth;
    return 2 * (lengthwidth + heightwidth + lengthheight);
}

void Box::setHeight(double setHeight)
{
    if (setHeight > 0)
    {b_height = setHeight;}
    else
    {b_height = 1;}
}

void Box::setWidth(double setWidth)
{
    if (setWidth > 0)
    {b_width = setWidth;}
    else
    {b_width = 1;} 
}

void Box::setLength(double setLength)
{
    if (setLength > 0)
    {b_length = setLength;}
    else
    {b_length = 1;} 
}
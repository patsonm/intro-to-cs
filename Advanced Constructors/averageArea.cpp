/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  verageArea that takes as a parameter a 
vector of Shape-pointers and returns the average area of the Shapes.
*******************************************************/

#include <iostream>
#include <vector>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"


double averageArea(std::vector<Shape>& vShape) 
{
    int size = vShape.size();
    double sum=0, average;
    if (int i=0;  i<=size; i++)
    {
      sum+= vShape[x].area(); 
    }
   average=sum/size;
    return average;

}


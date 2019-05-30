/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  This defines Square::Child class of rectangle and shape.hpp
*******************************************************/


#include <iostream>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace std;

//defaut constructer takes legth and width

Square::Square(double width):Rectangle(length, width)
    {
        this->width=width;
        this->length=width;
    }
//sets the width
void Square::setWidth(double width)
    {
    this->width=width;
    this->length=width;
    }

//sets the length
void Square::setLength(double length)
    {      
    this->width=length;
    this->length=length;
    }

//gets the area
double Square::area()
    {
    return width*length;
    }

//gets the perimeter
double Square::perimeter()
    {
    return width+width+length+length;
    }

/*int main(){
    Square r(3);
    
    double x,y;
    
    x=r.getPerimeter();
    y=r.getArea();
    
    cout<<"Perimeter is: "<<x<<endl;
    cout<<"Area is: "<<y<<endl;
    
}*/

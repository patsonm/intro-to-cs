/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7A.  This defines Circle::Child class of shape.hpp
*******************************************************/




#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"


using namespace std;


//constructor for circle

Circle::Circle(double radius)
{
    this->radius=radius;
}
//sets the radius
void Circle::setRadius(double radius)
{
    this->radius=radius;
}

//gets the area
double Circle::area()
{
    double area;
    double pi=3.141592;
    area = pi*radius*radius;
    return area;
}

//gets the perimeter
double Circle::perimeter()
{
    double perimeter;
    double pi=3.141592;
    perimeter= 2 * pi * radius;
    return perimeter; 
}


/*int main(){
    Circle c(1);
    
    double x,y;
    
    x=c.getPerimeter();
    y=c.getArea();
    
    cout<<"Perimeter is: "<<x<<endl;
    cout<<"Area is: "<<y<<endl;
}*/
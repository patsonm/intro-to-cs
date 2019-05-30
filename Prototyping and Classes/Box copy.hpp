/********************************************************************* 
** Author: Michael Patson
** Date: October 5, 2017
** Description: Assignment 3a hpp box
*********************************************************************/ 


#ifndef BOX_HPP
#define BOX_HPP

//Defines the interface of the Box Class

class Box
{
    private:
    double b_height;
    double b_width;
    double b_length; 
    
    public:
    Box();
    Box(double, double, double);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double calcVolume();
    double calcSurfaceArea();
};
#endif
#ifndef BOX_HPP
#define BOX_HPP

//Defines the interace of the Box Class
class Box
{
    private:
        double b_height;
        double b_width;
        double b_length;
    public:
        Box();
        Box(double height, double width, double length);
        double calcVolume();
        double calcSurfaceArea(); 
        void setHeight();
        void setWidth();
        void SetLength();
};
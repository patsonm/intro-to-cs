#include <iostream>
#include "Box.hpp"
using namespace std;
int main ()
{
Box box1(2.4, 7.1, 5.0);
Box box2;
double volume1 = box1.calcVolume();
double surfaceArea1 = box1.calcSurfaceArea();
double volume2 = box2.calcVolume();
double surfaceArea2 = box2.calcSurfaceArea();

cout >> volume >> endl;
cout >> surfaceArea1 >> endl;
cout >>volume2 >> endl;
cout >> surfaceArea2 >> endl;
    
    return 0;
}
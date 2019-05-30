/********************************************************************* 
** Author: Michael Patson
** Date: September 20, 2017
** Description: Assignment 1.d Temperature Conversion
*********************************************************************/

#include <iostream>

//Temperature conversion from C to F

int main()
{
    double celsius, fahrenheit;
    
    //input celsius
    std::cout << "Please enter a Celsius temperature." << std::endl;
    std::cin >> celsius;
    
    //convert to fahrenheit
    fahrenheit = (9 * celsius / 5) + 32;
    
    //output data
    std::cout << "The equivalent Fahrenheit temperature is:" << std::endl;
    std::cout << fahrenheit << std::endl;
    
    return 0;
}
/********************************************************************* 
** Author: Michael Patson
** Date: September 20, 2017
** Description: Assignment 1.b Garden
*********************************************************************/ 

#include <iostream>


// a simple calculator
int main()
{
    double soil, flower, fence, totalcost;
    
    // Get the cost of the soil
    std::cout << "What does the soil cost? " << std::endl;
    std::cin >> soil;
    
    // Get the cost of the flower seeds
    std::cout << "What do the flower seeds cost? " << std::endl;
    std::cin >> flower;
    
    // Get the cost of the fence
    std::cout << "What does the fence cost? " << std::endl;
    std::cin >> fence;
    
    // Sum the total
    totalcost = soil + flower + fence;
    
    // Display the total cost
    std::cout << "The total cost is " << totalcost << std::endl;
        
    
    return 0;
}
/********************************************************************* 
** Author: Michael Patson
** Date: September 20, 2017
** Description: Assignment 1.e Temperature Conversion
*********************************************************************/

#include <iostream>

//Change Dispenser
int main ()
{
    int change, quarters, dimes, nickels, pennies, rDimes, rNickels;
    
    //input change
    std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
    std::cin >> change;
    
    //Calculate quaters and remaining cents
    quarters = change / 25;
    
    rDimes = change % 25;
    
    //Calculate dimes and remaining cents
    dimes = rDimes / 10;
    
    rNickels = rDimes % 10;
    
    //Calulate nickles and pennies
    nickels = rNickels / 5;
    
    pennies = rNickels % 5;
    
    //output
    std::cout << "Your change will be: " << std::endl;
    std::cout << "Q: " << quarters << std::endl;
    std::cout << "D: " << dimes << std::endl;
    std::cout << "N: " << nickels << std::endl;
    std::cout << "P: " << pennies <<std::endl;
    
    
    
    return 0;
    
}
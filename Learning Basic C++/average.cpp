/********************************************************************* 
** Author: Michael Patson
** Date: September 20, 2017
** Description: Assignment 1.c Average
*********************************************************************/ 

#include <iostream>


//Average Calculator
int main()
{
    double numberA, numberB, numberC, numberD, numberE, output;
    
    //Input the numbers
    std::cout << "Please enter five numbers." << std::endl;
    std::cin >> numberA;
    std::cin >> numberB;
    std::cin >> numberC;
    std::cin >> numberD;
    std::cin >> numberE;
    
    //Calculate
    output =(numberA + numberB + numberC + numberD + numberE)/5;
    
    //Output
    std::cout << "The average of those numbers is:" << std::endl;
    std::cout << output << std::endl;
    
    return 0;
}

    
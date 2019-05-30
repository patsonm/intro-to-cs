/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.c number guess
*********************************************************************/ 

//This is a program that prompts one user for a number and outputs too high or too low

#include <iostream>


int main ()
{
    int winningNumber, guess, tries;
    
    //ask user for winning number
    std::cout << "Enter the number for the player to guess." << std::endl;
    std::cin >> winningNumber;
    
    std::cout << "Enter your guess." << std::endl;
    
    while (winningNumber != guess)
    {
        
        std::cin >> guess;
    
        tries++;
        
        //check number
        if (winningNumber < guess)
        {
            std::cout << "Too high - try again." << std::endl;
        }
        else if (winningNumber > guess)
        {
            std::cout << "Too low - try again." << std::endl;
        }
        
        
            
    }
    //you got in winner!
    std::cout << "You guessed it in " << tries << " tries." <<std::endl;
    return 0;
}
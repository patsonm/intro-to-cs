/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.a minmax
*********************************************************************/ 

#include <iostream>

//A program to determine min and max inputs from user defined length list

int main()

{
    int count, inputcount=1;
    
    //receive input list length
    std::cout << "How many integers would you like to enter?" << std::endl;
    std::cin >> count;
    
    //prompt user for integers
    std::cout << "Please enter " << count << " integers." << std::endl;
    
    //input integers and set max min initial
    int max, min, value;
    std::cin >> value;
    max=value;
    min=value;
  
  
    //determine if input is min or max
    while (count > inputcount)
    {
        inputcount++;
        std::cin >> value;
        if (value > max)
        {
            max=value;
        }
        else if (value < min)
        {
            min=value;
        }
        
         
    }
    std::cout << "min: " << min << std::endl;
    std::cout << "max: " << max << std::endl;
    
    return 0;
}
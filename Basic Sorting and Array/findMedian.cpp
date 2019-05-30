/********************************************************************* 
** Author: Michael Patson
** Date: October 14, 2017
** Description: Assignment 4a Median Function.  This file contains a function that takes 2 parameters ints and size of arry, and returns the median value.  remember to do odd and even array median types "middle number"
*********************************************************************/ 

#include <iostream>
#include <algorithm>



float findMedian (int array[], int size)  
{
    std::sort(array, array + size);
    float median;
    if (size % 2 == 0)
    {
        median = (array[size/2] + array[size/2-1])/2.0;
    }
    else
    {
        median = array[size/2];  
    }
    
    return median;
}



/*
int main()
{
    float rMedian;
    
  int array[] = {12, 23, 5, -10, 0, 0, 321, 1, 2, 99, 30};
  int size = 11; 
 
 rMedian = findMedian(array, size);
    
 for (int i = 0; i < size; i++) 
     std::cout << array[i] << ' '; 
    
    
std::cout << "here is the median" << std::endl;
    
std::cout << rMedian << std::endl;
   
 
return 0;
}

*/
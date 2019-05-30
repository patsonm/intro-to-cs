/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 4b function return standard dev of ages from an array with two varaibles  utilizing the Person class

This function takes two parameters #array of person and size of the array

Returns standard dev of all ages
*********************************************************************/ 

#include "Person.hpp"
#include <cmath>

double stdDev(Person array[], int inputsize)
{
    double sum;
    int size;
    size=inputsize;
    
    //first determine the mean
    for (int i=0; i < size; i++)
    {
        sum += array[i].getAge();
        
    }
    //determine the mean
    
    double mean = sum/size;
    
    double result;
    //subtract mean and square result
    for (int i=0; i < size; i++)
    {
         result += pow(array[i].getAge()-mean,2);
    }
    
    
    
    return sqrt(result / size);
    
}

/*int main ()
{
    Person mp("Michael", 28);
    Person cc("Chups", 27);
    Person bp("Brian", 25);
    Person parray[3]={mp, cc, bp};
    int size = 3;
    double mean3;
    
    mean3 = stdDev(parray, size);
    
    std::cout << mean3 << std::endl;
    
    return 0;
}
*/
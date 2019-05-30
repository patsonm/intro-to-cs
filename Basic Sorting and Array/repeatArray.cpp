/********************************************************************* 
** Author: Michael Patson
** Date: October 15, 2017
** Description: Assignment 4d Array Doubler that prevents memory leaks
*********************************************************************/ 

#include <iostream>
using namespace std;


void repeatArray(double*& inputArray, int size)
{

    
//doubles size of array   
int newSize = size * 2;

//create a temp array that is the double dize
        
double* newArray = new double[newSize]; 
for (int i= 0; i < size; i++)
{
    newArray[i] = inputArray[i];
    newArray[i+size] = inputArray[i];
}

  
delete[] inputArray;
inputArray = newArray;

}
/*int main ()
{

   double* myArray = new double[3];
   for (int i=0; i<3; i++)
      myArray[i] = (i+1)*2;

   repeatArray(myArray, 3);

   for (int i=0; i<6; i++)
      cout << myArray[i] << endl;

   delete []myArray;
    
    return 0;
}
*/
/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.e smallSort
*********************************************************************/ 

#include<iostream>
using namespace std;



void smallSort (int& a, int& b, int& c)
{
    //variable to swap
    if(a>b)swap(a,b);// check to see if bigger than b
    if(a>c)swap(a,c);//give largest
    
    //check b
    if(b<a)swap(b,a);
    if(b>c)swap(b,c);
       
}

/*int main ()
//{
//    int a = 4;
//    int b = 5;
//    int c = 3;
//    smallSort(a, b, c);
    
//    cout << a << ", " << b << ", " << c << endl;
    
//    return 0;

}
*/

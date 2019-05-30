/********************************************************************* 
** Author: Michael Patson
** Date: October 15, 2017
** Description: Assignment 4.c small sort

This is a void function that takes the address of thre eint variables and sorts the ints at those address in ascending order
*********************************************************************/ 
#include<iostream>
using namespace std;

void swap (int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void smallSort2(int* a, int* b, int* c)
{
    //variable to swap
    if(*a>*b)swap(a,b);// check to see if bigger than b
    if(*a>*c)swap(a,c);//give largest
    
    //check b
    if(*b<*a)swap(b,a);
    if(*b>*c)swap(b,c);
       
}
/*
int main ()
{
int a = 14;
int b = -90;
int c = 2;
smallSort2(&a, &b, &c);
cout << a << ", " << b << ", " << c << endl;  
    return 0;
    
}

*/
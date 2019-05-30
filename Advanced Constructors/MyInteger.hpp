/*******************************************************
Michael Patosn
November 3rd 2017
Project: HW 7B.  The is the myinteger hpp 
*******************************************************/


#include<iostream>
using namespace std;

#ifndef MYINTERGER_HPP
#define MYINTERGER_HPP

class MyInteger
{
    private:
    int *pInteger;
     
    public:
    MyInteger(int); 
    MyInteger(MyInteger&);
    
        
    int getMyInt();
    void setMyInt(int n);
    void operator=(MyInteger &n);
   
};
#endif
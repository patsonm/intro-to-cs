/********************************************************************* 
** Author: Michael Patson
** Date: October 27, 2017
** Description: Assignment 6b: 

binToDec, 
that takes as a parameter a C++ string of '1's and '0's 
that make up the binary representation of a positive integer
returns the equivalent int value.

decToBin 
that takes as a parameter a positive integer
returns a C++ string of '1's and '0's that make up the 
binary representation of that number (no leading zeros).
*********************************************************************/ 


#include<iostream>
#include<string>
using namespace std;

int binToDec(string s)
    {
    int length = s.size();
    
    if(length==0)return 0;
        char c = s.at(length-1);
        int a = c-'0';
        string s1 = s.substr(0,length-1);
        
        return binToDec(s1)*2+a;
    }
string decToBin(int n)
    {
    if(n==0)return "0";
    if(n==1)return "1";
        return decToBin(n/2)+decToBin(n%2);
    }


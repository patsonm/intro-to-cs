/********************************************************************* 
** Author: Michael Patson
** Date: October 22, 2017
** Description: Assignment 5c selection sory
*********************************************************************/ 




#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void stringSort(string array[], int size);
int compareCaps(string a, string b);

int compareCaps(string a, string b)
{
    int x;
    for (x = 0; x < a.size() && b.size(); x++)
    {
        if (toupper(a[x]) > toupper(b[x]))
            return 1;
        else if (toupper(b[x]) > toupper(a[x]))
            return 0;
    }
    if (x == a.size())
        return 0;
    else
        return 1;
}

void stringSort(string array[], int size)
{
    int startScan;
    int minIndex;
    string minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (compareCaps(array[index], minValue) == 0)
            {
                minValue = array[index];
                minIndex = index;
            }
        }   

        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}


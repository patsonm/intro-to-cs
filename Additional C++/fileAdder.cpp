/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 2.b fileAdder
*********************************************************************/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//this is a simple text file creator

int main ()
{
    //Please enter file name
    string fileName;
    int sum, line;
    cout << "Please enter your filename." << endl;
    
    cin >> fileName;
    
    //test filename
    //std:: cout << fileName << std::endl;
   
    //Read and open file file 
    ifstream inputFile;
    inputFile.open(fileName.c_str());
    
    if (!inputFile)
    {
        cout << "could not access file" << endl;
        return 0;
    }
    
    //Sum input file intergers
    
    while (inputFile >> line)
    {
        sum = sum + line;
    }
    
    inputFile.close();
    
    //create output text file, and print complete
    //cout << sum; test to check output
    
    ofstream output;
    output.open ("sum.txt");
    output << sum;
    output.close();
    cout << "result written to sum.txt" << endl;
    
    return 0;
}

/********************************************************************* 
** Author: Michael Patson
** Date: September 29, 2017
** Description: Assignment 4b person class
*********************************************************************/ 

#include<iostream>
#include <string>

#ifndef PERSON_HPP
#define PERSON_HPP

//Defines the interface of the Person Class

class Person
{
    private:
    std::string name;
    double age;
    
    public:
    Person(std::string, double);
    std::string getName();
    double getAge();
    
};
#endif
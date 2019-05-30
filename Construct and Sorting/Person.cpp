/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 4b person.cpp
            This defines the functions of the person class
*********************************************************************/ 



#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"

//default contructor takes name age

Person::Person(std::string inputName, double inputAge)
    {
    name = inputName;
    age= inputAge;
    }

std::string Person::getName() const
{
    return name;
}

double Person::getAge()
{
    return age;
}


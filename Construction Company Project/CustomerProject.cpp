/****************************************************
Michael Patson
Homeworkd 8B
November 10th, 2017

Descrition: These function define the customer project
class and is the base case
****************************************************/

#include <iostream>
#include <cstdlib>
#include "CustomerProject.hpp"


/*****************************************************
Description: Cunstructor for CustomerProject object.
Parameters: double hours, double material cost, double
transportation costs
*******************************************************/
CustomerProject::CustomerProject(double hours, double materials, double transportation)
{
    setHours(hours);
    setMaterials(materials);
    setTransportation(transportation);
}

/*****************************************************
** Description: Sets number to class variable hours
** Parameters: double inHours
******************************************************/
void CustomerProject::setHours(double inHours)
{
    hours = inHours;
}

/*****************************************************
** Description: Sets number to class variable materials
** Parameters: double inMaterials
*******************************************************/
void CustomerProject::setMaterials(double inMaterials)
{
    materials = inMaterials;
}

/*****************************************************
** Description: Sets num to class variable transportation
** Parameters: double inTransportation
*******************************************************/
void CustomerProject::setTransportation(double inTransportation)
{
    transportation = inTransportation;
}

/*****************************************************
** Description: Returns hours
*******************************************************/
double CustomerProject::getHours() const
{
    return hours;
}

/*****************************************************
** Description: Returns materials
*******************************************************/
double CustomerProject::getMaterials() const
{
    return materials;
}

/*****************************************************
** Description: Returns transportation
*******************************************************/
double CustomerProject::getTransportation() const
{
    return transportation;
}
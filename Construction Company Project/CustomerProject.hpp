/****************************************************
Michael Patson
Homeworkd 8B
November 10th, 2017

Descrition: This file outlines the customer project 
class, and is the base case
****************************************************/

#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject
{
public:
   CustomerProject(double, double, double);
   void setHours(double);
   void setMaterials(double);
   void setTransportation(double);
   double getHours()const;
   double getMaterials()const;
   double getTransportation()const;
   virtual double billAmount() const = 0;

private:
   double hours;
   double materials;
   double transportation;  
};
#endif
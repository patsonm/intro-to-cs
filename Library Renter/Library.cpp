/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the definites from the ehader for the for the library class defines in LIBRARU.HPP
*****************************************/

#include "Library.hpp"




Library::Library()
{
   currentDate=0;
}
void Library::addBook(Book* b1){
holdings.push_back(b1);
}

// Add Patron function
void Library::addPatron(Patron* p1)
{
members.push_back(p1);
}

std::string Library::checkOutBook(std::string pID, std::string bID)
{
Book* b1 = getBook(bID);
if (b1 == NULL)
return "BOOK NOT FOUND";
  
Patron* pa = getPatron(pID);
if (pa == NULL)
return "patron not found";
  
Patron* p1a = b1->getCheckedOutBy();
if (p1a != NULL)
return "ALREADY CHECKED OUT";
  
Patron* p2a = b1->getRequestedBy();
if (p2a != NULL)
return "BOOK WAS HOLD BY ANOTHER PATRON";
  
b1->setDateCheckedOut(currentDate);
b1->setLocation(Locale::ON_HOLD_SHELF);
b1->setCheckedOutBy(pa);
pa->addBook(b1);
return "CHECKED OUT SUCCESSFULLY";
}

std::string Library::returnBook(std::string bID)
{
Book* b1= getBook(bID);
if (b1 == NULL)
return "BOOK NOT FOUND";
  
Patron* pa = b1->getCheckedOutBy();
if (pa == NULL)
return "ALREADY IN LIBRARY";
pa->removeBook(b1);
  
Patron* p1 = b1->getRequestedBy();
if (p1 == NULL)
b1->setLocation(Locale::ON_SHELF);
else{
b1->setDateCheckedOut(currentDate);
b1->setLocation(Locale::CHECKED_OUT);
b1->setCheckedOutBy(p1);
p1->addBook(b1);
}
return "SUCCESSFULLY RETURN";
}

std::string Library::requestBook(std::string pID, std::string bID)
{
Book* b1 = getBook(bID);
if (b1 == NULL)
return "BOOK NOT FOUND";
  
Patron* pa = getPatron(pID);
if (pa == NULL)
return "NOT FOUND";
  
Patron* p1a = b1->getRequestedBy();
if (p1a != NULL)
return "HOLD BY ANOTHER PATRON";
  
b1->setRequestedBy(p1a);
b1->setLocation(Locale::ON_HOLD_SHELF);
return "SUCCESSFULLY REQUESTED";
}

std::string Library::payFine(std::string pID, double payment)
{
Patron* p1 = getPatron(pID);
if (p1 == NULL)
return "NOT FOUND";
  
if (payment < 0)
return "FINE SHOULD BE POSITIVE";
  
p1->amendFine(payment);
return "SUCCESSFULLY PAID";
}

void Library::incrementCurrentDate(){
   //RETURN THE CURRENT DATE
currentDate++;
}

Patron* Library::getPatron(std::string pID)
{
for (int k1 = 0; k1 < members.size(); k1++)
{
Patron* p1 = members[k1];
if (p1->getIdNum() == pID) return p1;
}
return NULL;
}

Book* Library::getBook(std::string bID)
{
for (int k1= 0; k1 < holdings.size(); k1++)
{
Book* b1 = holdings[k1];
if (b1->getIdCode() == bID) return b1;
}
return NULL;
}
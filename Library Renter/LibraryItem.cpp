/********************************************
**Michael Patson
**Nomber 28, 2017
**Assignment 10B
**Contains defintions for the Library Item Class
************************************************/


#include "LibraryItem.hpp"



//This is the default contructor

LibraryItem::LibraryItem()
{
   setIdCode(" ");
   setTitle(" ");
   setCheckedOutBy(NULL);
   setRequestedBy(NULL);
   setLocation(ON_SHELF);
}


//Librarty Item consutrctor
LibraryItem::LibraryItem(std::string idc, std::string t)
{
   setIdCode(idc);
   setTitle(t);
   setCheckedOutBy(NULL);
   setRequestedBy(NULL);
   setLocation(ON_SHELF);
}

//get the ID code
std::string LibraryItem::getIdCode()
{
   return idCode;
}

//set the ID code
void LibraryItem::setIdCode(std::string idc)
{
   idCode = idc;
}

//get the title
std::string LibraryItem::getTitle()
{
   return title;
}

//set the title
void LibraryItem::setTitle(std::string t)
{
   title = t;
}

//get the lcation
Locale LibraryItem::getLocation()
{
   return location;
}

//set the location
void LibraryItem::setLocation(Locale loc)
{
   location = loc;
}

//which patron has checked out item
Patron* LibraryItem::getCheckedOutBy()
{
   return checkedOutBy;
}

//set the patron whom checked out the item
void LibraryItem::setCheckedOutBy(Patron *p)
{
   checkedOutBy = p;
}

//set patron who requested
Patron* LibraryItem::getRequestedBy()
{
   return requestedBy;
}

//set patron who requested to check
void LibraryItem::setRequestedBy(Patron* p)
{
   requestedBy = p;
}

//gets the check out date
int LibraryItem::getDateCheckedOut()
{
   return dateCheckedOut;
}

//sets the checkout date
void LibraryItem::setDateCheckedOut(int d)
{
   dateCheckedOut = d;
}


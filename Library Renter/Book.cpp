/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the definites from the ehader for the for the BOOK class defines in BOOK.HPP
*****************************************/

#include "Book.hpp"

//default constructor, calls out no inputs
Book::Book(){
idCode = "idCode: N/A";
title = "title: N/A";
author = "author: N/A";
location = ON_SHELF;
}


//creates a book and puts it on the shelf
Book::Book(string id, string t, string a)
{
    idCode = id;
    title = t;
    author = a;
    location = ON_SHELF;
}


//gets the id code
string Book::getIdCode()
{
    return idCode;
}


//gets the title
string Book::getTitle()
{
    return title;
}

//gets the authors name
string Book::getAuthor()
{
    return author;
}

//gets the books locations
Locale Book::getLocation()
{
    return location;
}

//sets the location of the book
void Book::setLocation(Locale location)
{
    location = location;
}

//gets the current owner of book
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}

//sets who checked out the book
void Book::setCheckedOutBy(Patron* p)
{
    checkedOutBy = p;
}

//requested by who
Patron* Book::getRequestedBy()
{
    return requestedBy;
}

//set the book to the patron who requested it
void Book::setRequestedBy(Patron* p)
{
    requestedBy = p;
}

//date of checkout
int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}


//set the date of thecheckout
void Book::setDateCheckedOut(int d)
{
dateCheckedOut = d;
}

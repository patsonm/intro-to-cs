/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the definites from the ehader for the for the PATRON class defines in PATRON.HPP
*****************************************/

#include "Patron.hpp"

//default constructor
Patron::Patron()
{
    id = "idCode: N/A";
    name = "name: N/A";
} 

//sets id and name in patron class
Patron::Patron(std::string id, std::string n)
{
    id = id;
    name = n;
}

//returns the id number
string Patron::getIdNum()
{
    return id;
}

//gets the name of the patron
string Patron::getName()
{
    return name;
}

//returns a vector of the books a patron has checked out
vector<Book *> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

//adds a book
void Patron::addBook(Book* b)
{
    checkedOutBooks.push_back(b);
}

//deletes a book from the patrons list of books
void Patron::removeBook(Book* b)
{
    for(int k1 = 0; k1 < checkedOutBooks.size(); ++k1)
        {
        if(checkedOutBooks[k1] == b)
            {
            checkedOutBooks.erase(checkedOutBooks.begin() + k1);
            break;
            }
        }
}

//late fee fine amount
double Patron::getFineAmount()
{
    return fineAmount;
}

//adds fine to current fine
void Patron::amendFine(double amnt)
{
    fineAmount += amnt;
}
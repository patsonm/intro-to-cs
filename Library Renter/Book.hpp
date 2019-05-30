/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the headers for the BOOK class
*****************************************/

#ifndef BOOK_HPP
#define BOOK_HPP

#include<vector>
#include<iostream>
#include<string>

using namespace std;

enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};

class Book
{
    
private:
    std::string idCode;
    std::string title;
    std::string author;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
    
public:
    static const int CHECK_OUT_LENGTH = 21;
    Book();
    Book(std::string id, std::string t, std::string a);//construct wuith id code, title and author
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();
    Locale getLocation();
    void setLocation(Locale lo);
    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron* p);
    Patron* getRequestedBy();
    void setRequestedBy(Patron* p);
    int getDateCheckedOut();
    void setDateCheckedOut(int d);
    
};

#endif
/**************************************************
**Name: Michael Patson
**Date: November 21, 2017
**Assignment: Homework assignment 9 part A.
**Design a class called StringList with following:
        void add (std::string);
        int positionOf (std::string);
        bool setNodeVal(int, std::string);
        std::vector<std::string> getAsVector();
        a default constructor
        a copy constructor
        a destructor

***********************************************/


#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP


#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct list
{
    string val;
    struct list* next;
}
    listnode;


class StringList
{
    private:
        listnode* root;

    public:
        StringList();
        StringList(const StringList &obj);
        ~StringList();
        void add(string val);
        int positionOf(string val);
        bool setNodeVal(int pos, string val);
        vector<string> getAsVector();
    };

#endif
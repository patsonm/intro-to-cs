/**************************************************
**Name: Michael Patson
**Date: November 21, 2017
**Assignment: Homework assignment 9 part A.
**Design a class called StringList with following:


***********************************************/


#include "StringList.hpp"

StringList::StringList()
{
    root = NULL;
}

StringList::~StringList()
{
    listnode* temp;
    while(root!=NULL)
    {
        temp = root;
        root = root->next;
        delete(temp);
    }
}

StringList::StringList(const StringList& obj)
{
   listnode* temp = obj.root;
   while(temp!=NULL)
   {
       add(temp->val);
       temp = temp->next;
   }
}

void StringList::add(string val)
{
   listnode* temp = root;
   listnode* node = new listnode();
   node->val = val;
   if(root == NULL)
       root = node;
   else
   {
       while(temp->next!=NULL)
           temp = temp->next;

       temp->next = node;
   }
}


int StringList::positionOf(string val)
{
    listnode* temp = root;
    int pos = -1;
    while(temp!=NULL)
    {
        
            if(temp->val == val)
            return pos;

        temp = temp->next;
        
        pos++;

    }
    return pos;

}

bool StringList::setNodeVal(int pos, string val)
{
   listnode* temp = root;
   int index = 0;
   while(temp!=NULL)
   {
       
       if(index == pos)
       {
           temp->val = val;
           return true;
       }

       if(index > pos)
           return false;
       
       temp = temp->next;
       
       index++;
       
   }

}

vector<string> StringList::getAsVector()
{  
   listnode* temp = root;
   vector<string> listofstring;
   while(temp!=NULL)
   {
       listofstring.push_back(temp->val);
       temp = temp->next;
   }
   return listofstring;
}




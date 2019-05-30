/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the headers for the MOVIE class
INHERITS FROM Library ITem
*****************************************/

#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

class Movie : public LibraryItem 
{
   private: 
      std::string director;
    
   public:
      Book(std::string idc, std::string t, std::string dir);
      static const int CHECK_OUT_LENGTH_MOVIE = 7;
      void setDirector(std::string d);
      std::string getDirector();
};



#endif
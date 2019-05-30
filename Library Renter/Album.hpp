/****************************************
**Michael Patson
**November 24, 2017
** Project 10B
** This file contains the headers for the Album class
INHERITS FROM Library ITem
*****************************************/

#ifndef ALBUM_HPP
#define ALBUM_HPP

#include <string>

class Movie : public LibraryItem 
{
   private: 
      std::string artist;
    
   public:
      Book(std::string idc, std::string t, std::string art);
      static const int CHECK_OUT_LENGTH_ALBUM = 14;
      void setArtist(std::string art);
      std::string getArtist();
};



#endif
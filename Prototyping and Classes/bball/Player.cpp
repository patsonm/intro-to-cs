/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c player.cpp
*********************************************************************/ 



#include <iostream>
#include <string>
#include "Player.hpp"

//default contructor

Player::Player()
    {
        name = "";
        points = -1;
        rebounds = -1;
        assists = -1;
    }

Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn)
    {  
    name = nameIn;
    points = pointsIn;
    rebounds = reboundsIn;
    assists = assistsIn;
    }

std::string Player::getName()
{
    return name;
}

void Player::setPoints(int pointsIn)
{
    points = pointsIn;
}

int Player::getPoints()
{
    return points;
}

void Player::setRebounds(int reboundsIn)
{
    rebounds = reboundsIn;
}

int Player::getRebounds()
{
    return rebounds;
}

void Player::setAssists(int assistsIn)
{
    assists = assistsIn;
}

int Player::getAssists()
{
    return assists;
}


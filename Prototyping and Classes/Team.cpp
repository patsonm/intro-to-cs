/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c cpp team
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Team.cpp"
#include "Player.cpp"


//default team class has 5 players
Team::Team(Player::Player pg, Player::Player sg, Player::Player sf, Player::Player pf, Player::Player center)
{
    setPointGuard(pg);
    setShootingGuard(sg);
    setSmallForward(sf);
    setPowerForward(pf);    
    setCenter(center);           
}
void Team::setPointGuard(Player::Player pg)
{
    pointGuard = pg;
}

Player::Player Team::getPointGuard()
{
    return pointGuard;
}

void Team::setShootingGuard(Player::Player sg)
{
    shootingGuard = sg;
}

Player::Player Team::getShootingGuard()
{
    return shootingGuard;
}

void Team::setSmallForward(Player::Player sf)
{
    smallForward = sf;
}


Player::Player Team::getSmallForward()
{
    return smallForward
}


Player::Player Team::setPowerForward(Player::Player pf)
{
    powerForward = pf;
}

Player::Player Team::getPowerForward()
{
    return powerForward;
}


Player::Player Team::setCenter(Player::Player c)
{
    center = c;
}

Player::Player Team::getCenter()
{
    return center;
}

int Team::totalPoints()
{
    totalpoints = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
    
     return totalpoints;
}
    
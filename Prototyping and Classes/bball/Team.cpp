/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c cpp team
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Team.hpp"
#include "Player.hpp"



//default team class has 5 players
Team::Team(Player pg, Player sg, Player sf, Player pf, Player center)
{
    setPointGuard(pg);
    setShootingGuard(sg);
    setSmallForward(sf);
    setPowerForward(pf);    
    setCenter(center);           
}
void Team::setPointGuard(Player pg)
{
    pointGuard = pg;
}

Player Team::getPointGuard()
{
    return pointGuard;
}

void Team::setShootingGuard(Player sg)
{
    shootingGuard = sg;
}

Player Team::getShootingGuard()
{
    return shootingGuard;
}

void Team::setSmallForward(Player sf)
{
    smallForward = sf;
}


Player Team::getSmallForward()
{
    return smallForward;
}


void Team::setPowerForward(Player pf)
{
    powerForward = pf;
}

Player Team::getPowerForward()
{
    return powerForward;
}


void Team::setCenter(Player c)
{
    center = c;
}

Player Team::getCenter()
{
    return center;
}

int Team::totalPoints()
{
    teamPoints = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
    
     return teamPoints;
}
    
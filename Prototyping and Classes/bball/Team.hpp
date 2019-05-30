/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c hpp team
*********************************************************************/ 


#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
    private:
        Player pointGuard;
        Player shootingGuard;
        Player smallForward;
        Player powerForward;
        Player center;
        int teamPoints;
    
    public:
    Team(Player, Player, Player, Player, Player);
    
    //PG
    void setPointGuard(Player);
    Player getPointGuard();
    //sg
    void setShootingGuard(Player);
    Player getShootingGuard();
    //smallf
    void setSmallForward(Player);
    Player getSmallForward();
    //PF
    void setPowerForward(Player);
    Player getPowerForward();
    //center
    void setCenter(Player);
    Player getCenter();
    
    //total points
    int totalPoints();
};
#endif       
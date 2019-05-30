/********************************************************************* 
** Author: Michael Patson
** Date: October 9, 2017
** Description: Assignment 3c hpp team
*********************************************************************/ 


#ifndef TEAM_HPP
#define TEAM_HPP
#include <string>
#include "Player.cpp"

class Team
{
    private:
    int totalpoints;
    Player::Player pointGuard, shootingGuard, smallForward, powerForward, center;
    
    public:
    void Team(Player::Player, Player::Player, Player::Player, Player::Player, Player::Player)
    //pg
    void setPointGuard(Player::Player);
    Player::Player getPointGuard();
    //sg
    void setShootingGuard(Player::Player);
    Player::Player getShootingGuard();
    //smallf
    void setSmallForward(Player::Player);
    Player::Player getSmallForward();
    //PF
    void setPowerForward(Player::Player);
    Player::Player getPowerForward();
    //center
    void setCenter(Player::Player);
    Player::Player getCenter();
    
    //total points
    int totalPoints();
}
#endif

//
// Created by Tyler Toper on 4/11/2018.
//
#include "Player.h"
#include "CardAndDeck.h"
#include <iostream>

class Game{
private:
    ///Methods to be used while playing the game
    //Deals cards to all players
    virtual void dealAll();

    //Deals a card to a player
    virtual void dealOne(int playerNum);
public:
    //The method to run to play the game
    virtual void play();
};


#ifndef GROUPCASINOPROJECT_GAME_H
#define GROUPCASINOPROJECT_GAME_H

#endif //GROUPCASINOPROJECT_GAME_H

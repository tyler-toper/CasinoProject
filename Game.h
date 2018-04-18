#include "Player.h"
#include "CardAndDeck.h"
#include <iostream>
#include <vector>

class Game{
private:
    int maxPlayers;
    ///Methods to be used while playing the game
    //Deals cards to all players
    virtual void dealAll() = 0;

    //Deals a card to a player
    virtual void dealOne(int playerNum) = 0;
public:
    //The method to run to play the game
    virtual void play() = 0;
};


#ifndef GROUPCASINOPROJECT_GAME_H
#define GROUPCASINOPROJECT_GAME_H

#endif //GROUPCASINOPROJECT_GAME_H

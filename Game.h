//
// Created by Tyler Toper on 4/11/2018.
//
#include "Player.h"
#include "CardAndDeck.h"
#include <iostream>

class Game{
private:
    virtual Player players[] = 0;
    Deck deck = deck();
    virtual Card table[] = 0;
    int pot = 0;

    ///Methods to be used while playing the game
    //Deals cards to all players
    virtual void dealAll() = 0;

    //Deals a card to a player
    virtual void dealOne(int playerNum) = 0;
public:
    //The game constructor
    virtual Game(Player* players) = 0;

    //The method to run to play the game
    virtual void play() = 0;

};


#ifndef GROUPCASINOPROJECT_GAME_H
#define GROUPCASINOPROJECT_GAME_H

#endif //GROUPCASINOPROJECT_GAME_H

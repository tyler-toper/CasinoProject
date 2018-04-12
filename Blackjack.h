//
// Created by Tyler Toper on 4/11/2018.
//

#include "CardAndDeck.h"
#include "Game.h"
#include "Player.h"

class Blackjack: public Game{
private:
    Deck deck;
    Card table[5];
    Player players[4];
   //Methods
public:
    Blackjack();
};

Blackjack::Blackjack() {
    deck = Deck();
}

#ifndef GROUPCASINOPROJECT_BLACKJACK_H
#define GROUPCASINOPROJECT_BLACKJACK_H

#endif //GROUPCASINOPROJECT_BLACKJACK_H

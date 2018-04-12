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
    int numPlayers = 4;
    ///Methods to be used while playing the game
    //Deals cards to all players
    void dealAll();

    //Deals a card to a player
    void dealOne(int playerNum);
public:
    Blackjack();
};

Blackjack::Blackjack() {
    deck = Deck();
}

void Blackjack::dealAll() {

}
#ifndef GROUPCASINOPROJECT_BLACKJACK_H
#define GROUPCASINOPROJECT_BLACKJACK_H

#endif //GROUPCASINOPROJECT_BLACKJACK_H

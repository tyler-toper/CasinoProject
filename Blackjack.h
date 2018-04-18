#include "CardAndDeck.h"
#include "Game.h"
#include "Player.h"
#include <vector>

class Blackjack: public Game{
private:
    //Variables
    Deck deck;
    Card table[5];
    vector<Player> players;
    int maxPlayers = 4;
    int currentPlayers = 0;

    ///Methods to be used while playing the game
    //Deals cards to all players
    void dealAll();

    //Deals a card to a player
    void dealOne(int playerNum);

public:
    Blackjack(vector<Player> playerList);
    void play();
};

Blackjack::Blackjack(vector<Player> playerList) {
    deck = Deck();
    players = playerList;
    if(players.size() > maxPlayers){
        throw std::overflow_error("Too Many Players");
    }
    while(players.size() != maxPlayers){
        Player bot = Player();
        players.push_back(bot);
    }
}

void Blackjack::play(){

}

void Blackjack::dealAll() {

}

void Blackjack::dealOne(int playerNum) {

}
#ifndef GROUPCASINOPROJECT_BLACKJACK_H
#define GROUPCASINOPROJECT_BLACKJACK_H

#endif //GROUPCASINOPROJECT_BLACKJACK_H

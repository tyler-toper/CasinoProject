#include "CardAndDeck.h"
#include "Game.h"
#include "Player.h"

class Blackjack: public Game{
private:
    //Variables
    Deck deck;
    Card table[5];
    vector<Player> players;
    int maxPlayers = 4;
    int currentPlayers = 0;
    Player dealer;

    ///Methods to be used while playing the game
    //Deals cards to all players
    void dealAll();

    //Deals a card to a player
    void dealOne(string playerName);

public:
    Blackjack(vector<Player> playerList);
    void play();
};

//Initializes the conditions of the game and imports the players from main into the class
///This must be done for every Game unless someone has a better idea
Blackjack::Blackjack(vector<Player> playerList) {
    deck = Deck();
    dealer = Player("The Dealer", 15000);
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
    for(int i = 0; i < players.size(); i++){
        players.at(i).drawCard(deck.draw());
    }
    dealer.drawCard(deck.draw());
}

void Blackjack::dealOne(string playerName) {
    for(int i = 0; i < players.size(); i++){
        if(players.at(i).getName().compare(playerName) == 0){
            players.at(i).drawCard(draw());
        }
    }
}
#ifndef GROUPCASINOPROJECT_BLACKJACK_H
#define GROUPCASINOPROJECT_BLACKJACK_H

#endif //GROUPCASINOPROJECT_BLACKJACK_H

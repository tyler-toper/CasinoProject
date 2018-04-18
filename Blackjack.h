#include "CardAndDeck.h"
#include "Game.h"
#include "Player.h"

class Blackjack: public Game{
private:
    //Variables
    Deck deck;
    Card table[5];
    vector<Player> players;
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
}

void Blackjack::play() {
    bool play = true;
    int wager = 0;
    int pot = 2;
    while (play) {
        for (int i = 0; i < players.size(); i++) {
            std::cout <<"What is your wager " << players.at(i).getName() << "?" << std::endl;
            std::cin >> wager;
            while(wage < players.at(i).getMoney()){

            }
            while(wager < pot){

            }
        }
    }
}

void Blackjack::dealAll() {
    for(int i = 0; i < players.size(); i++){
        players.at(i).drawCard(deck.draw());
    }
    dealer.drawCard(deck.draw());
}

void Blackjack::dealOne(string playerName) {
    if(playerName.compare("The Dealer")){
        dealer.drawCard(deck.draw());
    }

    for(int i = 0; i < players.size(); i++){
        if(players.at(i).getName().compare(playerName) == 0){
            players.at(i).drawCard(draw());
        }
    }
}
#ifndef GROUPCASINOPROJECT_BLACKJACK_H
#define GROUPCASINOPROJECT_BLACKJACK_H

#endif //GROUPCASINOPROJECT_BLACKJACK_H

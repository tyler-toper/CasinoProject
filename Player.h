#include "CardAndDeck.h"
#include <iostream>
#ifndef GROUPCASINOPROJECT_PLAYER_H
#define GROUPCASINOPROJECT_PLAYER_H

class Player{
private:
    Card hand[7];
    int money = 0;
    bool human;
    string name;
    int handIndex = 0;
public:
    Player();
    Player(string name, int money);
    bool isHuman();
    string getName();
    int getMoney();
    Card* getHand();
    void drawCard(Card cardToAdd);
};
///Player Constructors and Methods
//Constructors
//Makes a AI Player (Could be expanded)
Player::Player(){
    name = "BOT";
    money = 500;
    human = false;
}

//Makes a human player
Player::Player(string name, int money) {
    this->name = name;
    this->money = money;
    human = true;
}

//Methods
//Returns if the Player is human
bool Player::isHuman() {
    return human;
}

//Returns the Player name
string Player::getName() {
    return name;
}

//Returns the Player's money
int Player::getMoney(){
    return money;
}

//Returns the Player's hand
Card* Player::getHand() {
    return hand;
}

//Adds a Card to a Player's hand
void Player::drawCard(Card cardToAdd) {
    hand[handIndex] = cardToAdd;
    handIndex++;
}

#endif //GROUPCASINOPROJECT_PLAYER_H

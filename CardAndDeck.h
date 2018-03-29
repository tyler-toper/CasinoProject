// Created by Tyler Toper on 3/28/2018.

#include <iostream>
using namespace std;

//
#ifndef GROUPCASINOPROJECT_CARDANDDECK_H
#define GROUPCASINOPROJECT_CARDANDDECK_H

///Used in the deck, hand, and table portions of the games
class Card{
private:
    int value;
    string suit;

public:
    //Constructors
    Card();
    Card(int value, string suit);

    //The Methods
    void set(int value, string suit);
    void print();
};

///Card Methods
///Constructors
//Generic Constructor
Card::Card() {
    this->suit = "";
    this->value = 0;
}

//Specific Constructor
Card::Card(int value, string suit) {
    this->suit = suit;
    this->value = value;
}

///The Methods
void Card::set(int value, string suit) {
    this->suit = suit;
    this->value = value;
}
void Card::print() {
    std::cout << value << " of " << suit;
}


///The deck the game draws from
class Deck{
private:
    Card collective[52];
    bool isEmpty = false;
    int index = 0;
    string suits[4] = {"Spades","Hearts","Clubs","Diamonds"};

public:
    //The Constructors
    Deck();

    //The Methods
    void printDeck();
};

//The Constructors
Deck::Deck() {
    int tempVal = 0;
    for(int i = 0; i < 52; ++i){
        if(i%4 == 0){
            tempVal++;
        }

        switch(i%4){
            case 0:
                collective[i].set(tempVal,suits[0]);
            case 1:
                collective[i].set(tempVal,suits[1]);
            case 2:
                collective[i].set(tempVal,suits[2]);
            case 3:
                collective[i].set(tempVal,suits[3]);
        }
    }

}

//The Methods
//Prints the deck
void Deck::printDeck() {
    for(int i = 0; i < 52; ++i){
        collective[i].print();
        std::cout << "\n";
    }
}
#endif //GROUPCASINOPROJECT_CARDANDDECK_H
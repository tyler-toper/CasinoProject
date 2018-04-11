// Created by Tyler Toper on 3/28/2018.

#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
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

///Card Methods and Constructors
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


///The Deck the games will draw from
//Note: The cards are from 1-13, will need to be translated into Aces, Jacks, Queens, and Kings
class Deck{
private:
    Card collective[52];
    bool isEmpty = false;
    int index = 0;
    string suits[4];

public:
    ///The Constructors
    Deck();

    ///The Methods
    //This is a test function that prints the deck out to console
    void printDeck();

    //This randomizes the order of the Cards in the Deck
    void shuffle();
};

///Deck Methods and Constructors
//The Constructors
Deck::Deck() {
    int tempVal = 0;
    suits[0] = "Spades";
    suits[1] = "Hearts";
    suits[2] = "Clubs";
    suits[3] = "Diamonds";

    for(int i = 0; i < 13; ++i){

        Card hearts = Card(i + 1,"Hearts");
        Card diamonds = Card(i + 1,"Diamonds");
        Card clubs = Card(i + 1,"Clubs");
        Card spades = Card(i + 1,"Spades");

        collective[i] = hearts;
        collective[i+13] = diamonds;
        collective[i+26] = clubs;
        collective[i+39] = spades;
    }
}

//The Methods
//Prints the Deck
void Deck::printDeck() {
    for(int i = 0; i < 52; ++i){
        collective[i].print();
        std::cout << "\n";
    }
}

//Randomizes the order of the Cards in the Deck
void Deck::shuffle() {
    index = 0;
    srand(time(NULL));
    //Front to back Shuffle
    for(int i = 0; i < 52; i++){
        Card temp = Card();
        temp = collective[i];
        int r = rand()%(52-i);
        collective[i] = collective[r];
        collective[r] = temp;
    }
    //Back to front Shuffle
    for(int i = 51; i >= 0; i--){
        Card temp = Card();
        temp = collective[i];
        int r = rand()%(i+1);
        collective[i] = collective[r];
        collective[r] = temp;
    }
}
#endif //GROUPCASINOPROJECT_CARDANDDECK_H
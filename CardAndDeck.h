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
    int getValue();
    string getSuit();
    string getPicName();
};

///Card Methods and Constructors
///Constructors
//Generic Constructor (makes a blank card)
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
//Sets a card to a specific value and suit
void Card::set(int value, string suit) {
    this->suit = suit;
    this->value = value;
}

//Print the card to console
void Card::print() {
    std::cout << value << " of " << suit;
}

//Returns the Value
int Card::getValue() {
    return value;
}

//Returns the Suit
string Card::getSuit() {
    return suit;
}

//Returns the Picture Name
string Card::getPicName() {
    string temp = suit;
    temp += to_string(value);
    return temp;
}
///The Deck the games will draw from
//Note: The cards are from 1-13, will need to be translated into Aces, Jacks, Queens, and Kings
class Deck{
private:
    Card collective[52];
    bool empty = false;
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

    //Draws a card from the deck at a specific index
    Card draw();

    //Returns how many cards are left to draw
    int getSize();

    //Returns if the deck is empty
    bool isEmpty();
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

        Card hearts = Card(i + 1,"Heart");
        Card diamonds = Card(i + 1,"Diamond");
        Card clubs = Card(i + 1,"Club");
        Card spades = Card(i + 1,"Spade");

        collective[i] = hearts;
        collective[i+13] = diamonds;
        collective[i+26] = clubs;
        collective[i+39] = spades;
    }
    shuffle();
}

//The Methods
//Prints the Deck to console
void Deck::printDeck() {
    for(int i = 0; i < 52; ++i){
        collective[i].print();
        std::cout << "\n";
    }
}

//Randomizes the order of the Cards in the Deck
void Deck::shuffle() {
    index = 0;
    empty = false;
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

//Draws a card from the deck
Card Deck::draw(){
    if(empty){
        Card temp = Card();
        return temp;
    }
    Card temp = collective[index];
    index++;
    if(index >= 52){
        empty = true;
    }
    return temp;
}

//Returns how many cards are left to draw
int Deck::getSize() {
    return (52-index);
}

//Returns if the deck is empty
bool Deck::isEmpty() {
    return empty;
}
#endif //GROUPCASINOPROJECT_CARDANDDECK_H
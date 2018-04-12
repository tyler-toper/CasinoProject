#include <iostream>
#include "CardAndDeck.h"
#include "Player.h"
#include "Blackjack.h"

int main() {
    Deck temp = Deck();
    while(!temp.isEmpty()) {
        Card pint = temp.draw();
        std::cout << pint.getPicName() << std::endl;
    }
    return 0;
}
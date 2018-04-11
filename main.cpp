#include <iostream>
#include "CardAndDeck.h"

int main() {
    Deck test = Deck();
    test.shuffle();
    test.printDeck();
    return 0;
}
#include <iostream>
#include "CardAndDeck.h"
#include "Player.h"
#include "Blackjack.h"
#include <vector>

int main() {
    vector<Player> players;
    Player one = Player("Keepo",500);
    players.push_back(one);
    Blackjack temp = Blackjack(players);
    temp.play();
    std::cout << "Player " << one.getName() << "'s remaining balance: " << one.getMoney() << std::endl;
    return 0;
}
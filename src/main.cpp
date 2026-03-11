#ifndef DEBUG
#define DEBUG
#endif

#include <iostream>

#include "../include/Card.h"
#include "../include/UNO.h"

int main(int argc, char** argv) {
    uno::Deck myDeck;

    uno::Card c1(5, UNO::BLUE);
    uno::Card c2(4, UNO::RED);
    uno::Card c3(8, UNO::GREEN);
    uno::Card c4(2, UNO::YELLOW);
    uno::Card c5(2, UNO::RED);
    uno::Card c6(7, UNO::YELLOW);

    myDeck.addCard(c1);
    myDeck.addCard(c2);
    myDeck.addCard(c3);
    myDeck.addCard(c4);
    myDeck.addCard(c5);

    myDeck.printDeck();

    std::cout << myDeck.hasCard(c3) << std::endl; //true
    std::cout << myDeck.hasCard(c6) << std::endl; //false

    myDeck.popCard(c3);
    myDeck.printDeck();
    std::cout << myDeck.hasCard(c3) << std::endl; // false

    std::cout << myDeck.hasPossibleCard(c6) << std::endl; // true
    myDeck.popCard(c4);
    std::cout << myDeck.hasPossibleCard(c6) << std::endl; // false

    return 0;
}

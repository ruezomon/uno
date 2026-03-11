#include "../include/Deck.h"
#include "../include/Card.h"
#include <vector>
#include <iostream>

void uno::Deck::addCard(Card newCard) {
    this->cards.push_back(newCard);
}

void uno::Deck::popCard(uno::Card cardToPop) {
    if (!hasCard(cardToPop)) throw "card not in deck";
    for (int i = 0; i < this->cards.size(); i++) {
        if (cardToPop.isSameCard(this->cards[i])) {
            this->cards.erase(this->cards.begin() + i);
        }
    }
}

bool uno::Deck::hasCard(uno::Card wanted) {
    for (int i = 0; i < this->cards.size(); i++) {
        if (this->cards[i].isSameCard(wanted)) return true;
    }
    return false;
}

bool uno::Deck::hasPossibleCard(uno::Card currentCard) {
    for (uno::Card i : this->cards) {
        if (currentCard.compatibleWith(i)) return true;
    }
    return false;
}

void uno::Deck::printDeck() {
    std::cout << "  | ";
    for (uno::Card i : this->cards) {
        std::cout << i.getName() << " | ";
    }
    std::cout << std::endl;
}
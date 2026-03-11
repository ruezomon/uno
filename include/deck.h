#pragma once

#include "card.h"
#include <vector>

struct Deck {
    private:
       std::vector<Card> cards;
    public:
	void addCard();
    	Card placeCard();
	bool hasPossibleCard(short currentColor, short currentNumber);
	bool getPossibleCard();
	void printDeck();
};

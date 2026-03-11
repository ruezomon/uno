#pragma once

#include "Card.h"
#include <vector>

namespace uno {
	struct Deck {
 		private:
  	 		std::vector<uno::Card> cards;
    	public:
			void addCard(uno::Card newCard);
	    	void popCard(uno::Card cardToPop);
			bool hasPossibleCard(uno::Card currentCard);
			void printDeck();
			bool hasCard(uno::Card wanted);
	};
};
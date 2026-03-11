#pragma once
#include <string>

namespace uno {
   struct Card {
      private:
         unsigned short value;
         unsigned short color;         
      public:
         Card(unsigned short value, unsigned short color);
	      unsigned short getValue();
	      unsigned short getColor();
         bool compatibleWith(Card& other);
         bool isSameCard(Card other);
         std::string getName();         
   };
};
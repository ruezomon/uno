#include "../include/Card.h"
#include "../include/UNO.h"
#include <map>

uno::Card::Card(unsigned short value, unsigned short color) {

   if (value <= 9 && value >= 0)
    	this->value = value;
   else throw "value invalid";
   
   for (int i = 0; i < 4; i++) {
	   if (color == i) {
         this->color = color;
	      break;
	   }
    	   if (i == 3) throw "color invalid";
   }
}

unsigned short uno::Card::getValue() {
    return this->value;
}

unsigned short uno::Card::getColor() {
    return this->color;
}

bool uno::Card::compatibleWith(Card& other) {
    if (this->value == other.getValue() || this->color == other.getColor()) {
        return true;
    }
    return false;
}

bool uno::Card::isSameCard(Card other) {
    if (this->color == other.getColor() && this->value == other.getValue()) {
        return true;
    }
    return false;
}

std::string uno::Card::getName() {
    std::string result = "";
    std::string colorStrings[] = {"R", "B", "G", "Y"};
    result.append(colorStrings[this->color]);
    result += this->value + '0';
    return result;
}
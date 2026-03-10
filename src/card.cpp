#include "../include/card.h"

Card::Card(unsigned short value, unsigned short color) {
    if (value <= 9 && value >= 0)
    	this->value = value;
    else throw "value invalid";
    for (int i = 0; i < 4; i++) {
	if (color == Card::COLORS::RED) {
    	    this->color = color;
	    break;
	}
    	if (i == 3) throw "color invalid";
    }
}

unsigned short Card::getValue() {
    return this->value;
}

unsigned short Card::getColor() {
    return this->color;
}

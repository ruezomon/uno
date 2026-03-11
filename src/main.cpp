#ifndef DEBUG
#define DEBUG
#endif

#include <iostream>

#include "../include/card.h"
#include "../include/UNO.h"

int main(int argc, char** argv) {
    Card myCard(3, UNO::COLORS::BLUE);
    std::cout << myCard.getValue() << std::endl;
    std::cout << myCard.getColor() << std::endl;
}

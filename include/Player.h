#pragma once

#include "Deck.h"

struct Player {
    Deck hand;
    char* name;
    Player(char* name, Deck hand);
};

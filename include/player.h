#pragma once

#include "deck.h"

struct Player {
    Deck hand;
    char* name;
    Player(char* name, Deck hand);
};

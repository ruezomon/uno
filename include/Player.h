#pragma once

#include "Deck.h"

namespace uno {
    struct Player {
        private:
            Deck hand;
            char* name;
        public:
            Player(char* name, Deck hand);
    };
};
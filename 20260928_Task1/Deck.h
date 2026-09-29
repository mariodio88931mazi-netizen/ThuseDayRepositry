#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck
{
private:
    Card cards[44];
    int cardCount;

public:
    Deck();

    Card drawCard();

    int getCardCount();
};

#endif

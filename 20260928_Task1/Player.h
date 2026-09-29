#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"

class Player
{
private:
    Card hand[44];
    int handCount;
    int total;

public:
    Player();

    void addCard(Card card);

    int getTotal();

    void showCards();

    bool is21();

    bool isBurst();
};

#endif

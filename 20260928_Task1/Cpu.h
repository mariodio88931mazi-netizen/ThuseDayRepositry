#ifndef CPU_H
#define CPU_H

#include "Player.h"

class Cpu
{
private:
    Player cpuPlayer;

public:
    Cpu();

    void addCard(Card card);

    int getTotal();

    void showCards();

    bool is21();

    bool isBurst();

    bool shouldDraw(int playerTotal);
};

#endif

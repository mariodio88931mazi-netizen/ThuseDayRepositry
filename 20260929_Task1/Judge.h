#pragma once
#include "Player.h"
#include "CPU.h"

class Judge {
public:
    void judge(Player* player, CPU* cpu);

private:
    void printHand(int hand);
};
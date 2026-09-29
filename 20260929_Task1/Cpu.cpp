#include <cstdlib>
#include "Cpu.h"

void CPU::selectHand() {
    hand = rand() % 3;
}

int CPU::getHand() {
    return hand;
}
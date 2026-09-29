#include "Cpu.h"
#include <iostream>

using namespace std;


Cpu::Cpu()
{}


void Cpu::addCard(Card card)
{
    cpuPlayer.addCard(card);
}


int Cpu::getTotal()
{
    return cpuPlayer.getTotal();
}


void Cpu::showCards()
{
    cpuPlayer.showCards();
}


bool Cpu::is21()
{
    return cpuPlayer.is21();
}


bool Cpu::isBurst()
{
    return cpuPlayer.isBurst();
}


bool Cpu::shouldDraw(int playerTotal)
{
    int cpuTotal = getTotal();

    // 21‚È‚çˆø‚©‚È‚¢
    if (cpuTotal == 21)
    {
        return false;
    }

    // 15ˆÈ‰º‚È‚ç•K‚¸ˆø‚­
    if (cpuTotal <= 15)
    {
        return true;
    }

    // 16ˆÈã‚ÅPlayer‚æ‚è¬‚³‚¢‚È‚çˆø‚­
    if (cpuTotal < playerTotal)
    {
        return true;
    }

    // PlayerˆÈã‚È‚çˆø‚©‚È‚¢
    return false;
}

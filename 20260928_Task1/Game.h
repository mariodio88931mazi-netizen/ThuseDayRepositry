#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"
#include "Cpu.h"

class Game
{
private:
    Deck deck;
    Player player;
    Cpu cpu;

public:
    Game();

    void startGame();

    bool playerTurn();

    bool cpuTurn();

    void showResult();

    void run();
};

#endif

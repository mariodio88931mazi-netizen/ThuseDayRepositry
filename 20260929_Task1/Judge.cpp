#include <iostream>
#include "Judge.h"

using namespace std;

void Judge::judge(Player* player, CPU* cpu) {
    int playerHand = player->getHand();
    int cpuHand = cpu->getHand();

    cout << endl;

    cout << "あなた: ";
    printHand(playerHand);

    cout << "CPU: ";
    printHand(cpuHand);

    if (playerHand == cpuHand) {
        cout << "結果：あいこです。" << endl;
    }
    else if ((playerHand == 0 && cpuHand == 1) ||
        (playerHand == 1 && cpuHand == 2) ||
        (playerHand == 2 && cpuHand == 0)) {
        cout << "結果：あなたの勝ちです！" << endl;
    }
    else {
        cout << "結果：あなたの負けです。" << endl;
    }
}

void Judge::printHand(int hand) {
    if (hand == 0) {
        cout << "グー" << endl;
    }
    else if (hand == 1) {
        cout << "チョキ" << endl;
    }
    else {
        cout << "パー" << endl;
    }
}
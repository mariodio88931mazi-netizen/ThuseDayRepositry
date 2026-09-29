#include <iostream>
#include "Player.h"

using namespace std;

void Player::selectHand() 
{
    cout << "あなたの手を選んでください。" << endl;
    cout << "0: グー" << endl;
    cout << "1: チョキ" << endl;
    cout << "2: パー" << endl;
    cout << "入力: ";
    cin >> hand;

    if (hand < 0 || hand > 2)
    {
        hand = 0;
    }
}

int Player::getHand() 
{
    return hand;
}
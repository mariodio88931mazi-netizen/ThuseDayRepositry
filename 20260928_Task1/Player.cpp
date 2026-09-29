#include "Player.h"
#include <iostream>

using namespace std;


Player::Player()
{
    handCount = 0;
    total = 0;
}


void Player::addCard(Card card)
{
    hand[handCount] = card;
    handCount++;

    total += card.getValue();
}


int Player::getTotal()
{
    return total;
}


void Player::showCards()
{
    for (int i = 0; i < handCount; i++)
    {
        cout << hand[i].getValue();

        if (i < handCount - 1)
        {
            cout << "A";
        }
    }

    cout << endl;
}


bool Player::is21()
{
    return total == 21;
}


bool Player::isBurst()
{
    return total >= 22;
}

#include "Deck.h"
#include <cstdlib>

Deck::Deck()
{
    cardCount = 44;

    int index = 0;

    // 1～11をそれぞれ4枚作る
    for (int value = 1; value <= 11; value++)
    {
        for (int i = 0; i < 4; i++)
        {
            cards[index] = Card(value);
            index++;
        }
    }
}


Card Deck::drawCard()
{
    // 残っているカードからランダムに1枚選ぶ
    int index = rand() % cardCount;

    Card selectedCard = cards[index];

    // 引いたカードより後ろのカードを前に詰める
    for (int i = index; i < cardCount - 1; i++)
    {
        cards[i] = cards[i + 1];
    }

    cardCount--;

    return selectedCard;
}


int Deck::getCardCount()
{
    return cardCount;
}

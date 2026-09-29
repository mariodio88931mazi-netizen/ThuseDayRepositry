#include "Card.h"

Card::Card()
{
    value = 0;
}

Card::Card(int v)
{
    value = v;
}

int Card::getValue()
{
    return value;
}

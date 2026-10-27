#include "Player.h"
#include "Enemy.h"

int main()
{
	Player player;
	Enemy enemy;

	Character* character = &player;
	character->Attack(); // Œ•‚ÅUŒ‚

	character = &enemy;
	character->Attack(); // Šš‚İ‚Â‚«UŒ‚
}
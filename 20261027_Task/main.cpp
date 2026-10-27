#include "Enemy.h"
#include "Config.h"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void)
{
	srand((unsigned)time(NULL));

	vector<Enemy> enemies;
	
	for (int i = 0; i < enemyNUM; i++)
	{
		randomHP = rand() % randomNUM + randomMIN;
		/*Enemy enemy1(100);
		Enemy enemy2(200);
		enemy1.ShowStatus();
		enemy2.ShowStatus();*/
		
		enemies.push_back(Enemy(randomHP));
	}
	

	// “o˜^‚µ‚½“G‚ðŒ©‚Ä‚Ý‚Ü‚µ‚å‚¤
	for (const Enemy& enemy: enemies)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Ì”‚Í" << enemies.size() << endl;
}
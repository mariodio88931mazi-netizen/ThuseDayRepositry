
#include "Enemy.h"
#include "Config.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    // 乱数の初期化
    srand((unsigned int)time(NULL));

    vector<Enemy> enemies;

    // 敵を作成
    for (int i = 0; i < enemyNUM; i++)
    {
        int randomHP = rand() % randomNUM + randomMIN;

        enemies.push_back(Enemy(randomHP));
    }

    for (const Enemy& enemy : enemies)
    {
        Count++;
        cout << "敵" << Count << " : ";
        enemy.ShowStatus();
        cout << "\n";
    }

    // 攻撃
    if (!enemies.empty())
    {
        int select;
        cout << "攻撃したい敵を選べ！：";
        cin >> select;

        if (select >= 1 && select <= (int)enemies.size())
        {
            int damage = rand() % randomNUM + atkRndmMIN;

            cout << "与えるダメージ：" << damage << endl;

            enemies[select - 1].Damage(damage);
        }
        else
        {
            cout << "その番号の敵はいません！" << endl;
        }
    }

    // ダメージを受けた後の全員のHP
    cout << "\n--- ダメージ後 ---" << endl;

    for (const Enemy& enemy : enemies)
    {
        enemy.ShowStatus();
    }

    // HPが0以下の敵を削除
    for (auto it = enemies.begin(); it != enemies.end(); )
    {
        if (it->GetHP() <= 0)
        {
            it = enemies.erase(it);
        }
        else
        {
            ++it;
        }
    }

    // 削除後の表示
    cout << "\n--- 削除後 ---" << endl;

    for (const Enemy& enemy : enemies)
    {
        enemy.ShowStatus();
    }

    cout << "残った敵の数：" << enemies.size() << endl;

    return 0;
}

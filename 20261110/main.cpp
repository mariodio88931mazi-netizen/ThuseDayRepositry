
#include <iostream>
#include <vector>
#include <memory>
#include "Enemy.h"
#include "Config.h"

using namespace std;

int main()
{
    // ìGê∂ê¨
    vector<unique_ptr<Enemy>> enemies;

    for (int i = 1; i <= ENEMY_MAX; i++)
    {
        enemies.push_back(make_unique<Enemy>(i));
    }

    int target;

    while (true)
    {
        // ìGÇÃHPï\é¶
        cout << "\n---------------------------------------------------" << endl;
        for (int i = 0; i < ENEMY_MAX; i++)
        {
            if (!enemies[i]->IsAlive())
            {
                cout << "\n\n\n\n\n\n";
            }
            else
            {
                // ÉXÉâÉCÉÄå©ÇΩñ⁄
                cout << "\nÅ@Å@ Åø\nÅ@  ÉmÅR\n  Å^Å@Å@Å_\n / (•)(•)Å»\nÅb(ÅRÅQÉm)Åb\n Å_ìÒìÒìÒÅ^";
            }
            cout << endl;
        }
       
        for (const auto& enemy : enemies)
        {
            enemy->ShowStatus();
        }

        // ëSàıì|ÇµÇΩÇ©ämîF
        bool allDead = true;

        for (const auto& enemy : enemies)
        {
            if (enemy->IsAlive())
            {
                allDead = false;
                break;
            }
        }

        if (allDead)
        {
            cout << "\nëSÇƒÇÃìGÇì|ÇµÇΩÅI" << endl;
            break;
        }

        // çUåÇëŒè€ëIë
        cout << "\nçUåÇÇ∑ÇÈìGÇëIëÇµÇƒÇ≠ÇæÇ≥Ç¢ (1Å`3): ";
        cin >> target;

        // ì¸óÕÉ`ÉFÉbÉN
        if (target < ENEMY_MIN || target > ENEMY_MAX)
        {
            cout << "1Å`3ÇÃêîéöÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅI" << endl;
            continue;
        }

        // ëIëÇµÇΩìGÇéÊìæ
        Enemy* enemy = enemies[target - 1].get();

        // éÄñSÉ`ÉFÉbÉN
        if (!enemy->IsAlive())
        {
            cout << "ÇªÇÃìGÇÕä˘Ç…ì|Ç≥ÇÍÇƒÇ¢Ç‹Ç∑ÅI" << endl;
            continue;
        }

        // 30É_ÉÅÅ[ÉW
        enemy->TakeDamage(DAMAGE);
    }

    return 0;
}

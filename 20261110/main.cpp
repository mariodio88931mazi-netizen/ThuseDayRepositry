
#include <iostream>
#include <vector>
#include <memory>
#include "Enemy.h"
#include "Config.h"

using namespace std;

int main()
{
    // “G¶¬
    vector<unique_ptr<Enemy>> enemies;

    for (int i = 1; i <= ENEMY_MAX; i++)
    {
        enemies.push_back(make_unique<Enemy>(i));
    }

    int target;

    while (true)
    {
        // “G‚ÌHP•\¦
        cout << "\n--- “G‚Ìó‘Ô ---" << endl;

        for (const auto& enemy : enemies)
        {
            enemy->ShowStatus();
        }

        // ‘Sˆõ“|‚µ‚½‚©Šm”F
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
            cout << "\n‘S‚Ä‚Ì“G‚ğ“|‚µ‚½I" << endl;
            break;
        }

        // UŒ‚‘ÎÛ‘I‘ğ
        cout << "\nUŒ‚‚·‚é“G‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢ (1`3): ";
        cin >> target;

        // “ü—Íƒ`ƒFƒbƒN
        if (target < ENEMY_MIN || target > ENEMY_MAX)
        {
            cout << "1`3‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢I" << endl;
            continue;
        }

        // ‘I‘ğ‚µ‚½“G‚ğæ“¾
        Enemy* enemy = enemies[target - 1].get();

        // €–Sƒ`ƒFƒbƒN
        if (!enemy->IsAlive())
        {
            cout << "‚»‚Ì“G‚ÍŠù‚É“|‚³‚ê‚Ä‚¢‚Ü‚·I" << endl;
            continue;
        }

        // 30ƒ_ƒ[ƒW
        enemy->TakeDamage(DAMAGE);
    }

    return 0;
}

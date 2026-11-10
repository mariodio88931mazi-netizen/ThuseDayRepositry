
#include <iostream>
#include "Enemy.h"
#include "Config.h"

using namespace std;

// コンストラクタ
Enemy::Enemy(int enemyId)
{
    id = enemyId;
    hp = HP_MAX;
}

// ダメージ
void Enemy::TakeDamage(int damage)
{
    if (!IsAlive())
    {
        cout << "この敵は既に倒されています！" << endl;
        return;
    }

    hp -= damage;

    if (hp < 0)
    {
        hp = 0;
    }

    cout << "敵" << id << "に"
        << damage << "ダメージ！" << endl;
}

// HP表示
void Enemy::ShowStatus() const
{
    cout << "敵" << id << " HP : " << hp;

    if (!IsAlive())
    {
        cout << " (撃破)";
    }

    cout << endl;
}

// 生存確認
bool Enemy::IsAlive() const
{
    return hp > 0;
}

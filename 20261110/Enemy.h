
#pragma once

class Enemy
{
private:
    int hp;
    int id;

public:
    // コンストラクタ
    Enemy(int enemyId);

    // ダメージ処理
    void TakeDamage(int damage);

    // HP表示
    void ShowStatus() const;

    // 生存確認
    bool IsAlive() const;
};

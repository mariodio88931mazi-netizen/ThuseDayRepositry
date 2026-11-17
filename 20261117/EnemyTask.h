#pragma once
class EnemyTask
{
private:
	int hp;
public:
	// コンストラクタ
	EnemyTask();

	// デストラクタ
	~EnemyTask();

	// 受けるダメージ
	void Damage(int damage);

	// HPを取得
	int GetHp()const;

	// 生存フラグ
	bool IsAlive() const;
};


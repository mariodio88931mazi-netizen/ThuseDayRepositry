#pragma once
#include <memory>
#include<vector>
#include "EnemyTask.h"
#include "ConfigTask.h"
class GameTask
{
private:
	// Enemyクラス管理
	std::vector<std::shared_ptr<EnemyTask>> enemies;

	// 初期化
	void Init();

	// 描画
	void Draw()const;

	// 攻撃
	void Attack();

	// クリアフラグ
	bool IsGameClear() const;

public:
	// ゲーム開始
	void Run();
};


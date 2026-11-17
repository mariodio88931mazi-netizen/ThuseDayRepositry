#include "EnemyTask.h"
#include "ConfigTask.h"

EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
EnemyTask::~EnemyTask() {}


void EnemyTask::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

int EnemyTask::GetHp() const
{
	return hp;
}

bool EnemyTask::IsAlive() const
{
	return hp > 0;
}
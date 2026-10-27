#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy() {}

void Enemy::ShowStatus() const
{
	cout << "Enemy HP: " << hp << endl;
}

void Enemy::Damage(int damage)
{
	hp -= damage;
}

int Enemy::GetHP() const
{
	return hp;
}
#pragma once
class Enemy
{
private:
	int hp;
public:
	Enemy(int hp);
	~Enemy();

	void ShowStatus() const;

	void Damage(int damage);

	int GetHP() const;
};


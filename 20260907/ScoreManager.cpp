#include "ScoreManager.h"
#include <iostream>
using namespace std;

//コンストラクタ(初期化)
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;
}

//スコアの加算
void ScoreManager::addPoints(int points)
{
	currentScore += points;
}

//スコアリセット
void ScoreManager::resetScore()
{
	currentScore = 0;
}

//ハイスコアを更新
void ScoreManager::updateHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}

//
void ScoreManager::displayScores()
{
	cout << "現在のスコア" << currentScore << endl;
	cout << "ハイスコア" << highScore << endl;
}
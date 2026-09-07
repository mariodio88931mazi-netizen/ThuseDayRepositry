#include "ScoreManager.h"
#include <iostream>
using namespace std;

int main(void)
{
	//
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScores();

	//
	cout << "100ポイント獲得しました。" << endl;
	score.addPoints(100);
	score.displayScores();
	
	//
	cout << "50ポイント獲得しました。" << endl;
	score.addPoints(50);
	score.displayScores();

	//
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScores();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScores();
}
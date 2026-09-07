#pragma
class ScoreManager
{
private:
	//
	int currentScore;
	int highScore;
public:
	//
	ScoreManager();

	//
	void addPoints(int points);
	void resetScore();
	void updateHighScore();
	void displayScores();
};
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_上村琉真.h"
using namespace std;
int i{};


void Tehudakubari(int player[], int cpu[])
{
	srand((unsigned)time(NULL));
	while (i < 3)
	{
		cpu[i] = rand() % RANDOMNUMBER_MAX;
		if (cpu[i-1] == cpu[i] || cpu[i-2] == cpu[i])
		{
			continue;
		}
		i++;
	} 
	i = 0;
	while (i < 3)
	{
		player[i] = rand() % RANDOMNUMBER_MAX;
		if (player[i - 1] == player[i] || player[i - 2] == player[i])
		{
			continue;
		}
		i++;
	}
}

void Tehuda_Show(int player[], int cpu[])
{
	cout << "プレイヤーの手札は、" << endl;
	for (i = 0; i < 3; i++)
	{
		cout << player[i] << endl;
	}
	//cout << "CPUの手札は、" << endl;
	//for (i = 0; i < 3; i++)
	//{
		//cout << cpu[i] << endl;
	//}

}

int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力した値に誤りがあります。再度入力してください\n";
		}
		else
		{
			break;
		}

	}
	return num;
}

void ChoceInput(int player_choce[])
{
	//変数宣言
	int i;
	//10個数値を入力
	for (i = 0; i < 3; i++)
	{
		//入力チェック関数を呼び出し入力する
		player_choce[i] = InputCheck(MIN, MAX);
	}
}

void Judge(int player[],int cpu[],int Hit_count[])
{
	for ( i = 0; i < 3; i++)
	{
		if (player[i] = cpu[i])
		{
			cout << "Hit" << endl;
			Hit_count++;
		}
		else
		{
			cout << "Miss" << endl;
		}
	}
}
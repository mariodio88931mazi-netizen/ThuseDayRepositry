//#include<iostream>
//#include"20260707_Header１_上村琉真.h"
//using namespace std;
//
//
//int even_count{};
//int odd_count{};
////入力
//void InputArray(int ary[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> ary[i];
//	}
//}
//
////仕分け
//void JudgeArray(int ary[], int even[], int odd[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (ary[i] % 2 == 0)
//		{
//			even[even_count] = ary[i];
//			even_count++;
//		}
//		else
//		{
//			odd[odd_count] = ary[i];
//			odd_count++;
//		}
//	}
//}
//
////表示
//void ShowArray(int ary[], int even[], int odd[])
//{
//	cout << "偶数は" << endl;
//	for (int i = 0; i < even_count; i++)
//	{
//		cout << even[i] << endl;
//	}
//	cout << "奇数は" << endl;
//	for (int j = 0; j < odd_count; j++)
//	{
//		cout << odd[j] << endl;
//	}
//}

#include <iostream>
#include "20260707_Header１_上村琉真.h"
using namespace std;

void AddArray(int ary[], int size)
{
	//変数宣言
	int i;
	//10個数値を入力
	for (i = 0; i < size; i++)
	{
		//入力チェック関数を呼び出し入力する
		ary[i] = InputCheck(MIN, MAX);
	}

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
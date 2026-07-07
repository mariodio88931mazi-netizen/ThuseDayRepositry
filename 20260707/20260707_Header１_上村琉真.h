//#pragma once
//const int HAIRETU_MAX = 10;
//
///// <summary>
///// 入力
///// </summary>
///// <param name="ary">配列</param>
//void InputArray(int ary[]);
///// <summary>
///// 仕分け
///// </summary>
///// <param name="ary">配列</param>
///// <param name="even">偶数</param>
///// <param name="odd">奇数</param>
//void JudgeArray(int ary[], int even[], int odd[]);
///// <summary>
///// 表示
///// </summary>
///// <param name="ary">配列</param>
///// <param name="even">偶数</param>
///// <param name="odd">奇数</param>
//void ShowArray(int ary[], int even[], int odd[]);

#pragma once

//定数
const int INDEX = 10;
const int MAX = 100;
const int MIN = 0;

/// <summary>
/// 配列追加関数
/// </summary>
/// <param name="ary">追加する関数</param>
/// <param name="size">配列の大きさ</param>
void AddArray(int ary[], int size);

/// <summary>
///入力チェック関数
/// </summary>/// 
/// <param name="min">最小値</param>/// 
/// <param name="max">最大値</param>/// 
/// <returns>入力した値</returns>
int InputCheck(int min, int max);
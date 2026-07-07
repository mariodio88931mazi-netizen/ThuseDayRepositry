#pragma once


using namespace std;
const int RANDOMNUMBER_MAX = 10;
const int MAX = 9;
const int MIN = 0;
const int Hit_Max = 3;


/// <summary>
/// 手札公開
/// </summary>
void Tehuda_Show(int player[], int cpu[]);

/// <summary>
/// 手札配布
/// </summary>
void Tehudakubari(int player[], int cpu[]);

/// <summary>
/// 
/// </summary>
/// 
/// <param name="player_choce">プレイヤーの予想</param>
/// <returns>
/// </returns>
void ChoceInput(int player_choce[]);
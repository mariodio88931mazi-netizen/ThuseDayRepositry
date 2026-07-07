#include<iostream>
#include"20260707_Header2_上村琉真.h"
int cpu_tehuda[3];
int player_tehuda[3];

int main(void)
{
	int P_Choce[3];
	cout << "CPUとの対戦ゲームとして3つの数字を当てましょう。" << endl;
	Tehudakubari(player_tehuda,cpu_tehuda);
	Tehuda_Show(player_tehuda,cpu_tehuda);
	cout << "=========================================" << endl;
	cout << "           プレイヤーのターン！          " << endl;
	cout << "=========================================" << endl;
	cout << "0から9までの数字を入力してください。" << endl;
	ChoceInput(P_Choce);

	return 0;
}

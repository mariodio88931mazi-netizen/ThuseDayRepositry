#include <cstdlib>
#include <ctime>

#include "Player.h"
#include "Cpu.h"
#include "Judge.h"

int main() {
    // 乱数の初期化
    srand(static_cast<unsigned int>(time(0)));

    // オブジェクトを作成
    Player player;
    CPU cpu;
    Judge judge;

    // ポインタを作成
    Player* playerPtr = &player;
    CPU* cpuPtr = &cpu;
    Judge* judgePtr = &judge;

    // プレイヤーとCPUが手を選ぶ
    playerPtr->selectHand();
    cpuPtr->selectHand();

    // 勝敗を判定
    judgePtr->judge(playerPtr, cpuPtr);

    return 0;
}
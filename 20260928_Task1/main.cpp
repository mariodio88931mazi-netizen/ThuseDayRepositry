#include "Game.h"
#include <cstdlib>
#include <ctime>

int main()
{
    // 乱数の初期化
    srand((unsigned)time(NULL));


    // Gameオブジェクトを作成
    Game game;


    // Game型のポインタ
    Game* gamePtr = &game;


    // ポインタを使ってゲーム開始
    gamePtr->run();


    return 0;
}

#include "Game.h"
#include <iostream>

using namespace std;


Game::Game()
{}


void Game::startGame()
{
    // Playerに2枚
    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());

    // CPUに2枚
    cpu.addCard(deck.drawCard());
    cpu.addCard(deck.drawCard());


    cout << "============================" << endl;
    cout << "        ゲーム開始" << endl;
    cout << "============================" << endl;

    cout << endl;


    cout << "Player：";
    player.showCards();

    cout << "合計："
        << player.getTotal() << endl;


    cout << endl;


    cout << "CPU：";
    cpu.showCards();

    cout << "合計："
        << cpu.getTotal() << endl;


    cout << endl;
}


// ========================================
// Playerのターン
// ========================================
bool Game::playerTurn()
{
    while (true)
    {
        // 21になった場合
        if (player.is21())
        {
            cout << "Playerは21になりました。" << endl;
            cout << "Playerのターンを終了します。" << endl;
            cout << endl;

            return true;
        }


        // バーストした場合
        if (player.isBurst())
        {
            cout << "Player："
                << player.getTotal() << endl;

            cout << "Playerがバーストしました！" << endl;
            cout << "Playerの負けです。" << endl;

            return false;
        }


        int input;


        cout << "カードを引きますか？" << endl;
        cout << "0：Yes" << endl;
        cout << "1：No" << endl;
        cout << "入力：";

        cin >> input;

        cout << endl;


        // カードを引く
        if (input == 0)
        {
            Card card = deck.drawCard();

            cout << "引いたカード："
                << card.getValue() << endl;

            player.addCard(card);


            cout << "Player：";
            player.showCards();

            cout << "合計："
                << player.getTotal() << endl;

            cout << endl;
        }


        // カードを引かない
        else if (input == 1)
        {
            cout << "Playerはカードを引きません。" << endl;
            cout << "Playerのターンを終了します。" << endl;
            cout << endl;

            return true;
        }


        // 間違った入力
        else
        {
            cout << "0または1を入力してください。" << endl;
            cout << endl;
        }
    }
}


// ========================================
// CPUのターン
// ========================================
bool Game::cpuTurn()
{
    cout << "============================" << endl;
    cout << "        CPUのターン" << endl;
    cout << "============================" << endl;

    cout << endl;


    while (true)
    {
        // CPUが21
        if (cpu.is21())
        {
            cout << "CPUは21になりました。" << endl;
            cout << "CPUはカードを引きません。" << endl;
            cout << endl;

            return true;
        }


        // CPUがバースト
        if (cpu.isBurst())
        {
            cout << "CPU："
                << cpu.getTotal() << endl;

            cout << "CPUがバーストしました！" << endl;
            cout << "Playerの勝ちです。" << endl;

            return false;
        }


        // CPUがカードを引くか判断
        if (cpu.shouldDraw(player.getTotal()))
        {
            cout << "CPU："
                << cpu.getTotal() << endl;

            cout << "CPUはカードを引きます。" << endl;


            Card card = deck.drawCard();

            cout << "引いたカード："
                << card.getValue() << endl;


            cpu.addCard(card);


            cout << "CPU：";
            cpu.showCards();

            cout << "合計："
                << cpu.getTotal() << endl;

            cout << endl;
        }


        // CPUがカードを引かない
        else
        {
            cout << "CPU："
                << cpu.getTotal() << endl;

            cout << "CPUはカードを引きません。" << endl;
            cout << endl;

            return true;
        }
    }
}


// ========================================
// 最終結果
// ========================================
void Game::showResult()
{
    int playerTotal = player.getTotal();
    int cpuTotal = cpu.getTotal();


    cout << "============================" << endl;
    cout << "        最終結果" << endl;
    cout << "============================" << endl;

    cout << endl;


    cout << "Player：";
    player.showCards();

    cout << "合計："
        << playerTotal << endl;


    cout << endl;


    cout << "CPU：";
    cpu.showCards();

    cout << "合計："
        << cpuTotal << endl;


    cout << endl;


    // 同じ点数
    if (playerTotal == cpuTotal)
    {
        cout << "引き分けです。" << endl;
    }

    // Playerの方が大きい
    else if (playerTotal > cpuTotal)
    {
        cout << "Playerの勝ちです。" << endl;
    }

    // CPUの方が大きい
    else
    {
        cout << "CPUの勝ちです。" << endl;
    }
}


// ========================================
// ゲーム全体
// ========================================
void Game::run()
{
    startGame();


    // Playerターン
    bool playerResult = playerTurn();


    // Playerがバースト
    if (playerResult == false)
    {
        return;
    }


    // CPUターン
    bool cpuResult = cpuTurn();


    // CPUがバースト
    if (cpuResult == false)
    {
        return;
    }


    // 最終結果
    showResult();
}

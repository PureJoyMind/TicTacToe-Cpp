// tictactoe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "GameManager.h"
#include "Player.h"

using namespace std;

int main()
{
    // Initiating game
    GameManager Game;

    cout << "   Welcome to a game of\n" << "    Tic Tac Toe\n\n";

    // Getting players info before starting the game
    Player p1;
    cout << "   Player 1:\n";
    p1.setName();
    p1.setSym();

    cout << "   Player 2:\n";
    Player p2;
    p2.setName();
    p2.setSym();
    
    cout << "\n\tThere are four rounds the best of four wins!\n ";

    // X and Y for input
    unsigned int p1X;
    unsigned int p1Y;
    unsigned int p2X;
    unsigned int p2Y;

    Game.boardPrint();

    while (true)// Game loop
    {
        cout << "\tChoose the coordinates X and Y: \n";
        cout << "\tPlayer 1\n";
        cout << "\tThe X axis: ";
        cin >> p1X;
        cout << "\tThe Y axis: ";
        cin >> p1Y;
        Game.boardAdd(p1X - 1, p1Y - 1, p1.symbol);

        Game.boardPrint();

    }
    
}

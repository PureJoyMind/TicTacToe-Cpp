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

    unsigned int counter{ 0 };
    while (true)// Game loop
    {

        cout << "\tPlayer 1\n";
        Game.boardAdd(p1X - 1, p1Y - 1, p1.symbol);

        Game.boardPrint();

        cout << "\tPlayer 2\n";
        Game.boardAdd(p2X - 1, p2Y - 1, p2.symbol);

        Game.boardPrint();

        counter++;
    }
    
}

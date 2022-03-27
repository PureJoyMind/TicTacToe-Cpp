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
    p1.setSym('X');
    cout << "\t" << p1.name << "'s icon is: " << p1.symbol << endl;

    cout << "   Player 2:\n";
    Player p2;
    p2.setName();
    p2.setSym('O');
    cout << "\t" << p2.name << "'s icon is: " << p2.symbol << endl;
    
    cout << "\n\tThere are four rounds the best of four wins!\n ";

    // X and Y for input
    unsigned int p1X{ 0 };
    unsigned int p1Y{ 0 };
    unsigned int p2X{ 0 };
    unsigned int p2Y{ 0 };

    Game.boardPrint();

    bool quit{ false };
    char quitGame{' '};

    while (quit == false)// Game loop
    {

        cout << "\t" << p1.name << "'s score: " << p1.winCount << endl;
        cout << "\t" << p2.name << "'s score: " << p2.winCount << endl;
        cout << endl;

        if (p1.winCount == 4 || p2.winCount == 4)
        {
            cout << "\tGame finished!\n";
            if (p1.winCount == 4) {
                cout << "\t" << p1.name << " Won!!!\n";
                break;
            }
            else
            {
                cout << "\t" << p2.name << " Won!!!\n";
                break;
            }

        }


        cout << "\t" << p1.name << "'s turn: \n";
        Game.boardAdd(p1X - 1, p1Y - 1, p1.symbol);
        if (Game.winCheck(p1.symbol))
        {
            ++p1.winCount;
            Game.boardPrint();
            cout << "\n\t" << p1.name << " won!\n \n";
            Game.clearBoard();
            continue;
        }

        Game.boardPrint();
        cout << "\n";

        cout << "\t" << p2.name << "'s turn: \n";
        Game.boardAdd(p2X - 1, p2Y - 1, p2.symbol);
        if (Game.winCheck(p2.symbol))
        {
            ++p2.winCount;
            Game.boardPrint();
            cout << "\n\t" << p2.name << " won!\n \n";
            Game.clearBoard();
            continue;
        }

        Game.boardPrint();
        cout << "\n";
        cout << "\tQuit game? (y/n) ";
        cin >> quitGame;
        if (quitGame == 'y' || quitGame == 'Y')
            quit = true;
    }
    
    cout << "\tIt was a nice Game!\n\tThank you for playing!!!\n";
}

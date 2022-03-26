#pragma once

#include <iostream>
#include <iomanip>

class GameManager
{
public:
	GameManager();// Clearing board when game begins
	void clearBoard();// Clearing board on demand
	void boardPrint();// Printing the board
private:
	char board[3][3];// Game board
};


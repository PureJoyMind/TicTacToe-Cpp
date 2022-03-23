#pragma once

#include <iostream>
#include <iomanip>

class GameManager
{
public:
	GameManager();
	void clearBoard();
	void boardPrint();
private:
	char board[3][3];
};


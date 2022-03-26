#pragma once

#include <iostream>
#include <string>

struct Player
{
	std::string name;// Player name
	char symbol;// Player symbol X or O
	char board[3][3];// Player board to check for win
	unsigned int winCount{ 0 };

	void setName();// Getting player name
	void setSym();// Getting player symbol
	void transferBoard(int a,  int b, char sym);// Transfering the board from the game to players board
	bool winCheck();// Checking players board for a win situation
}; 



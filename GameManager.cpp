#include "GameManager.h"

GameManager::GameManager()// Clearing board when game begins
{
	for (int i{ 0 }; i < 3; i++) {
		for (int j{ 0 }; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

void GameManager::clearBoard() // Clearing board on demand
{
	for (int i{ 0 }; i < 3; i++) {
		for (int j{ 0 }; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

void GameManager::boardPrint() // Printing the board
{	
	int x{ 1 }, y{ 1 }; 

	std::cout << "------------------";
	std::cout << std::endl;

	// first line, x line
	std::cout << "   | ";
	for (int i = 0; i < 3; i++)
	{
		std::cout << x << " | ";
		x++;
	}
	std::cout << std::endl;
	std::cout << "------------------";
	std::cout << std::endl;

	// the player input and y line
	for (int i{ 0 }; i < 3; i++) {
		std::cout << ' ' << y << " | ";// printing out the row num
		for (int j{ 0 }; j < 3; j++) {
			std::cout << board[i][j] << " | ";// printing out the array index

		}
		std::cout << std::endl;
		std::cout << "------------------";
		std::cout << std::endl;
		y++;
	}

}


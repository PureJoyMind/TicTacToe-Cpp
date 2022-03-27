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

void GameManager::boardAdd(int x, int y, char sym)
{
	std::cout << "\tChoose the coordinates X and Y: \n";
	std::cout << "\tThe X axis: ";
	std::cin >> x;
	std::cout << "\tThe Y axis: ";
	std::cin >> y;
	if (board[x - 1][y - 1] == ' ')// empty space verification
		board[x - 1][y - 1] = sym;
	else {
		std::cout << "\n\tAlready filled! choose another place\n";
		boardAdd(x, y, sym);
	}
}

bool GameManager::winCheck(char symbol)
{
	//Check the rows
	for (int i = 0; i < 3; i++) {
		if ((board[i][0] == symbol) && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
			return true; //We won!
		}
	}

	//Check the columns
	for (int i = 0; i < 3; i++) {
		if ((board[0][i] == symbol) && (board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {
			return true; //We won!
		}
	}

	//Check top left diagonal
	if ((board[0][0] == symbol) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
		return true; //We won!
	}

	//Check top right diagonal
	if ((board[2][0] == symbol) && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
		return true; //We won!
	}

	return false;
}


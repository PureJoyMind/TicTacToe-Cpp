#include "Player.h"

void Player::setName()
{
	std::cout << "	Please Enter Players Name:  ";
	std::cin.ignore();
	std::getline(std::cin, name);
}

void Player::setSym()
{
	std::cout << "	Enter Players Symbol( X or O ):  ";
	std::cin >> symbol;
	if (symbol != 'X' && symbol != 'O') {
		std::cout << "	Invalid input!\n";
		Player::setSym();
	}
}

void Player::transferBoard(int a, int b, char sym)
{
	board[a][b] = sym;
}

bool Player::winCheck()
{
	for (unsigned int i{ 0 }; i < 3; i++) {

		if (board[i][0] && board[i][1] && board[i][2] == symbol)
			return true;
	}
	for (int j{ 0 }; j < 3; j++) {
		if (board[0][j] && board[1][j] && board[2][j] == symbol)
			return true;
	}

	if (board[0][0] && board[1][1] && board[2][2] == symbol)
		return true;
		
	return false;
}

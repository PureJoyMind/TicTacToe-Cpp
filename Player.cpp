#include "Player.h"

void Player::setName()
{
	std::cout << "	Please Enter Players Name:  ";
	std::cin >> name;
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
/*
void Player::transferBoard(int a, int b, char sym)
{
	board[a][b] = sym;
}
*/

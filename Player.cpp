#include "Player.h"

void Player::setName()
{
	std::cout << "	Please Enter Players Name:  ";
	std::cin >> name;
}

void Player::setSym(char sym)
{
	symbol = sym;
}
/*
void Player::transferBoard(int a, int b, char sym)
{
	board[a][b] = sym;
}
*/

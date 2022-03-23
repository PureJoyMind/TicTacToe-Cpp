#include "Player.h"

void Player::setName()
{
	std::cout << " Please Enter Players Name:  ";
	std::getline(std::cin, name);
}

void Player::setSym()
{
	std::cout << " Enter Players Symbol( X or O ):  ";
	std::cin >> symbol;
}

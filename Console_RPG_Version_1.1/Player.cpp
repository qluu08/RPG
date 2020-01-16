#include "Function.h"
#include "Player.h"

Player::Player()
{
	_level = 0;
}

void Player::DisplayStats()
{
	cout << "level : " << _level << endl;
}
#ifndef PLAYER_H
#define PLAYER_H
#include "Item.h"

class Player
{
private:
	int _level, _;
public:
	Item Inventory[3];
	Player();
	void DisplayStats();

};
#endif
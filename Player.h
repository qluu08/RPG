#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Job.h"
using namespace std;

class Player : public Jobs
{
public:
	string PlayerName;
	int level, health, mana, str, intel, dex, def, crit;

};

#endif

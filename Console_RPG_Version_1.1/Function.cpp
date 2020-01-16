#include "Function.h"
void MainMenu()
{
	cout << "What would you like to do? (Input corresponding number) :\n";
	cout << "1. Dungeon\n";
	cout << "2. Inventory\n";
	cout << "3. Stats\n";
	cout << "4. Hospital\n";
	cout << "5. Save\n";
	cout << "6. Load\n";
	cout << "7. Exit\n";
}

void clearscreen()
{
	cout << string(100, '\n');
}

void dungeon()
{
	int difficulty;
	while (true)
	{
		cout << " Difficulty settings (Harder dungeons are longer with stronger mobs)\n";
		cout << "1. Easy\n";
		cout << "2. Medium\n";
		cout << "3. Hard\n";
		cout << " Please choice the corresponding number for a difficulty setting:\n";
		cin >> difficulty;
		if (difficulty < 4 && difficulty > 0)
			break;
		else
		{
			clearscreen(); //system("cls") is appearently a nono way of clearing screen
			cout << "Please enter a vaild number!\n\n";
		}
	}
	for (int x = 0; x < ((5 * difficulty) - 1); x++)
	{
		int y = rand() % 10 + 1;
		if (y <= 5)
		{
			if (y < 4)
			{
				//encounter();
				//levelup();
				cout << "encounter" << endl;
			}
			else if (y <= 5)
				cout << "chest" << endl;
			//chest();
		}
		else
			cout << "nothing" << endl;
	}
	cout << "BOSS BATTLE!!!" << endl;
	//bossencounter();
	//dungeonchest(); or can be a storyline item / weapon
}
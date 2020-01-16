#include "Function.h"
#include "Player.h"
#include "Item.h"
int main()
{
	srand(time(0));
	int selection;
	Player player1;
	Item sword;
	sword.Name = "Excalibur";
	player1.Inventory[0] = sword;
	do
	{
		MainMenu();
		cin >> selection;
		while (selection > 7 || selection < 0)
		{
			cout << "Please choice a valid selection" << endl;
			cin >> selection;
		}
		
		//Process the user's menu selction.
		switch (selection)
		{
		case 1:
			dungeon();
			break;
		case 2:
			cout << "Inventory" << endl;
			cout << player1.Inventory[0].Name;
			break;
		case 3:
			cout << "Displaying Stats" << endl;
			player1.DisplayStats();
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		}
	} while (selection != 7);

}





/*
	Player P1;
	int jobselection, selection;

	cout << "What is your Name?: ";
	cin >> P1.PlayerName;

	cout << "Welcome! " << P1.PlayerName << "\n\n";

	P1.health = 100;
	P1.level = 10;
	P1.mana = 70;
	P1.str = 10;
	P1.intel = 10;
	P1.dex = 10;
	P1.def = 10;
	P1.crit = 10;
	*/
	/*
	bool game = true;
	while (game)
	{

		cout << "These are the Jobs available:\n";
		cout << "1. Warrior \n";
		cout << "2. Mage \n";
		cout << "3. Bowman\n";
		cout << "4. Tank\n";
		cout << "Please select your job: ";
		cin >> P1.JobName;

		cout << "\n";

		while (P1.JobName < 1 || P1.JobName > 4)
		{
			cout << "Invalid Input. Please Try Again.\n";
			cout << "These are the jobs available:" << endl;
			cout << "1. Warrior \n";
			cout << "2. Mage \n";
			cout << "3. Bowman\n";
			cout << "4. Tank\n";
			cin >> P1.JobName;
		}

		if (P1.JobName == 1)
		{
			cout << "You selected Warrior\n";
			cout << "Are you sure?: (Y = 1/ N = 2): ";
			cin >> jobselection;

			while (jobselection < 1 || jobselection > 2)
			{
				cout << "Invalid Input \n";
				cout << "Are you sure?: (Y = 1/ N = 2): ";
			}

			if (jobselection == 1)
			{
				cout << "You selected Warrior. Good luck to you " << P1.PlayerName << "\n";
				P1.str = P1.str + 20;
				P1.def = P1.def + 10;
			}
			else if (jobselection == 2)
				cout << "Please Choose Again.\n";
		}

		if (P1.JobName == 2)
		{
			cout << "You selected Mage\n";
			cout << "Are you sure?: (Y = 1/ N = 2): ";
			cin >> jobselection;

			while (jobselection < 1 || jobselection > 2)
			{
				cout << "Invalid Input \n";
				cout << "Are you sure?: (Y = 1/ N = 2): ";
			}

			if (jobselection == 1)
				cout << "You selected Mage. Good luck to you " << P1.PlayerName << "\n";

			else if (jobselection == 2)
				cout << "Please Choose Again.\n";
		}

		if (P1.JobName == 3)
		{
			cout << "You selected Bowman\n";
			cout << "Are you sure?: (Y = 1/ N = 2): ";
			cin >> jobselection;

			while (jobselection < 1 || jobselection > 2)
			{
				cout << "Invalid Input \n";
				cout << "Are you sure?: (Y = 1/ N = 2): ";
			}

			if (jobselection == 1)
				cout << "You selected Bowman. Good luck to you " << P1.PlayerName << "\n";

			else if (jobselection == 2)
				cout << "Please Choose Again.\n";
		}

		if (P1.JobName == 4)
		{
			cout << "You selected Tank\n";
			cout << "Are you sure?: (Y = 1/ N = 2): ";
			cin >> jobselection;

			while (jobselection < 1 || jobselection > 2)
			{
				cout << "Invalid Input \n";
				cout << "Are you sure?: (Y = 1/ N = 2): ";
			}

			if (jobselection == 1)
				cout << "You selected Tank. Good luck to you " << P1.PlayerName << "\n";

			else if (jobselection == 2)
				cout << "Please Choose Again.\n";
		}

		if (jobselection <= 4)
			break;
	}
	*/
	//system("cls");
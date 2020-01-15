#include "Player.h"
#include "Job.h"
#include <iostream>


int main()
{
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

	while (true)
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
			cout << "You selected Warrior\n" ;
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

	system("cls");
	cout << "What would you like to do?\n";
	cout << "1. Dungeon\n";
	cout << "2. Inventory\n";
	cout << "3. Stats\n";
	cout << "4. Heal\n";
	cout << "5. Exit\n";
	cin >> selection;

	switch (selection)
	{
	case 1:
	{
		cout << "Dungeon is in Progress.\n";
		exit(0);
	}
	case 2:
	{
		cout << "Nothing in your inventory as of right now.";
		exit(0);
	}
	case 3:
	{

	}
	}

}
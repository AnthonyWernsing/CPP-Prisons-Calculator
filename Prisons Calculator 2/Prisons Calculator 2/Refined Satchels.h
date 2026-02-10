#pragma once
#include <iostream>
using namespace std;

/*
Satchel Equations
Ore to refined is 1.5x increase on all levels
Base amount is always 1200 more than the previous type of satchel (not refined to not refined)
Addition amount is always 12000 more than the previous tyoe if satchel (not refined to not refined)
*/

//Coal Satchel
void coalSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 10800;
		}
		else
		{
			total += (12600 * (i - 1) + 10800);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 10800
	//2 = 23400 (1 + 12600)
	//3 = 36000 (1 + 25200)
}

//Iron Satchel
void ironSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 12600;
		}
		else
		{
			total += (14400 * (i - 1) + 12600);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Lapis Satchel
void lapisSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 14400;
		}
		else
		{
			total += (16200 * (i - 1) + 14400);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Redstone Satchel
void redstoneSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 16200;
		}
		else
		{
			total += (18000 * (i - 1) + 16200);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Gold Satchel
void goldSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 18000;
		}
		else
		{
			total += (19800 * (i - 1) + 18000);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Diamond Satchel
void diamondSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 19800;
		}
		else
		{
			total += (21600 * (i - 1) + 19800);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Emerald Satchel
void emeraldSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 21600;
		}
		else
		{
			total += (23400 * (i - 1) + 21600);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Prismarine Satchel
void prismarineSatchel(int startLevel, int endLevel)
{

}

//Amethyst Satchel
void amethystSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 23400;
		}
		else
		{
			total += (25200 * (i - 1) + 23400);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}
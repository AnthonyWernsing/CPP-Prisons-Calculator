#pragma once
#include <iostream>
using namespace std;

/*
Satchel Equations
Ore to refined is 1.5x increase on all levels
Base amount is always 1200 more than the previous type of satchel (not refined to not refined)
Addition amount is always 12000 more than the previous tyoe if satchel (not refined to not refined)
*/

//Coal Ore Satchel
void coalOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 7200;
		}
		else
		{
			total += (8400 * (i - 1) + 7200);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 7200
	//2 = 15600 (1 + 8400)
	//3 = 24000 (1 + 16800)
}

//Iron Ore Satchel
void ironOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 8400;
		}
		else
		{
			total += (9600 * (i - 1) + 8400);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 8400
	//2 = 18000 (1 + 9600) 
	//3 = 27600 (1 + 19200)
}

//Lapis Ore Satchel
void lapisOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 9600;
		}
		else
		{
			total += (10800 * (i - 1) + 9600);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Redstone Ore Satchel
void redstoneOreSatchel(int startLevel, int endLevel)
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
			total += (12000 * (i - 1) + 10800);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Gold Ore Satchel
void goldOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 12000;
		}
		else
		{
			total += (13200 * (i - 1) + 12000);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Diamond Ore Satchel
void diamondOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 13200;
		}
		else
		{
			total += (14400 * (i - 1) + 13200);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Emerald Ore Satchel
void emeraldOreSatchel(int startLevel, int endLevel)
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
			total += (15600 * (i - 1) + 14400);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}

//Prismarine Ore Satchel
void prismarineOreSatchel(int startLevel, int endLevel)
{

}

//Amethyst Ore Satchel
void amethystOreSatchel(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		if (i == 1)
		{
			total += 15600;
		}
		else
		{
			total += (16800 * (i - 1) + 15600);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;
}
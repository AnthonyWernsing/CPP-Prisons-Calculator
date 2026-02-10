#pragma once
#include <iostream>
using namespace std;

//WoodenPick Calculator Function
void woodenPick(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (int i = startLevel; i < endLevel; i++)
	{
		total += (4800 * (i + (i)-1));
	}

	//Display the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 4800
	//2 = 14400
	//3 = 24000
	//4 = 33600
	//5 = 43200
}

//Stone Pick Calculator Function
void stonePick(int startLevel, int endLevel)
{
	int total = 0;

	//Loops and adds total energy value
	for (double i = startLevel; i < endLevel; i++)
	{
		{
			double multi = ((i - 1) * 1.8) + 1;
			total += (6000 * multi);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 6000
	//2 = 16800 (1 x 2.8)
	//3 = 27600 (1 x 4.6)
	//4 = 38400 (1 x 6.4)
	//5 = 49200 (1 x 8.2)
	//6 = 60000 (1 x 10)
	//7 = 70800 (1 x 11.8)
}

//Golden Pick Calculator Function
void goldenPick(int startLevel, int endLevel)
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
			total += (12000 * (i - 1) + 7200);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 7200
	//2 = 19200 (1 + 12000)
	//3 = 31200 (1 + 24000)
	//4 = 43200 (1 + 36000)
	//5 = 55200 (1 + 48000)
}

//Iron Pick Calculator Function
void ironPick(int startLevel, int endLevel)
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
			total += (13200 * (i - 1) + 8400);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 8400
	//2 = 21600 (1 + 13200)
	//3 = 34800 (1 + 26400)
	//4 = 48000 (1 + 39600)
	//5 = 61200 (1 + 52800)
}

//Diamond Pick Calculator Function
void diamondPick(int startLevel, int endLevel)
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
			total += (14400 * (i - 1) + 9600);
		}
	}

	//Displays the total amount of energy
	cout << endl << "Total energy cost from " << startLevel << " to " << endLevel << " is: " << total << endl << endl;

	//Test values for equation
	//1 = 9600
	//2 = 24000 (1 + 14400)
	//3 = 38400 (1 + 28800)
	//4 = 52800 (1 + 43200)
	//5 = 67200 (1 + 57600)
}
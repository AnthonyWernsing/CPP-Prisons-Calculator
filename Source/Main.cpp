#include <iostream>
#include "Files.h"
using namespace std;

int main()
{
	//Variable declorations
	int type = 5, startLevel, endLevel, type2;

	//Start while loop one
	while (type != 0)
	{
		cout << "Please select what you would like to calculate." << endl;
		cout << "0.) Terminate the program" << endl;
		cout << "1.) Pickaxe" << endl;
		cout << "2.) Ore Satchel" << endl;
		cout << "3.) Refined Satchel" << endl << endl;
		cin >> type;
		cout << endl;
		
		//Pickaxe if statement
		if (type == 1)
		{
			cout << "What pickaxe would you like to calculate" << endl;
			cout << "0.) to terminate the program" << endl;
			cout << "1.) Wooden Pick" << endl;
			cout << "2.) Stone Pick" << endl;
			cout << "3.) Golden Pick" << endl;
			cout << "4.) Iron Pick" << endl;
			cout << "5.) Diamond Pick" << endl << endl;
			cin >> type2;
			cout << endl;

			//Wooden pick
			if (type == 1)
			{
				cout << "What is the current level of the pick?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}

				woodenPick(startLevel, endLevel);
			}

			//Stone pick
			else if (type == 2)
			{
				cout << "What is the current level of the pick?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}

				stonePick(startLevel, endLevel);
			}

			//Golden pick
			else if (type == 3)
			{
				cout << "What is the current level of the pick?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}

				goldenPick(startLevel, endLevel);
			}

			//Iron pick
			else if (type == 4)
			{
				cout << "What is the current level of the pick?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}

				ironPick(startLevel, endLevel);
			}

			//Diamond pick
			else if (type == 5)
			{
				cout << "What is the current level of the pick?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}

				diamondPick(startLevel, endLevel);

			}

			type = 5;
			//End of pickaxes if statement
		}

		//Ore satchel if statement
		else if (type == 2)
		{
			cout << "What satchel would you like to calculate" << endl;
			cout << "0.) to terminate the program" << endl;
			cout << "1.)  Coal Ore Satchel" << endl;
			cout << "2.)  Iron Ore Satchel" << endl;
			cout << "3.) Lapis Ore Satchel" << endl;
			cout << "4.) Redstone Ore Satchel" << endl;
			cout << "5.) Gold Ore Satchel" << endl;
			cout << "6.) Diamond Ore Satchel" << endl;
			cout << "7.) Emerald Ore Satchel" << endl;
			cout << "8.) Amethyst Ore Satchel" << endl << endl;
			cin >> type2;
			cout << endl;

			//Coal Satchel
			if (type2 == 1)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				coalOreSatchel(startLevel, endLevel);
			}
			//Iron Satchel
			else if (type2 == 2)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				ironOreSatchel(startLevel, endLevel);
			}
			//Lapis Satchel
			else if (type2 == 3)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				lapisOreSatchel(startLevel, endLevel);
			}
			//Redstone Satchel
			else if (type2 == 4)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				redstoneOreSatchel(startLevel, endLevel);
			}
			//Gold Satchel
			else if (type2 == 5)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				goldOreSatchel(startLevel, endLevel);
			}
			//Diamond Satchel
			else if (type2 == 6)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				diamondOreSatchel(startLevel, endLevel);
			}
			//Emerald Satchel
			else if (type2 == 7)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				emeraldOreSatchel(startLevel, endLevel);
			}
			//Amethyst Satchel
			else if (type2 == 8)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				amethystOreSatchel(startLevel, endLevel);
			}
			type = 5;
			//End ore satchel if statement
		}

		//Refined satchel if statement
		else if (type == 3)
		{
			cout << "What satchel would you like to calculate" << endl;
			cout << "0.) to terminate the program" << endl;
			cout << "1.)  Coal Satchel" << endl;
			cout << "2.)  Iron Satchel" << endl;
			cout << "3.) Lapis Satchel" << endl;
			cout << "4.) Redstone Satchel" << endl;
			cout << "5.) Gold Satchel" << endl;
			cout << "6.) Diamond Satchel" << endl;
			cout << "7.) Emerald Satchel" << endl;
			cout << "8.) Amethyst Satchel" << endl << endl;
			cin >> type2;
			cout << endl;

			//Coal Satchel
			if (type2 == 1)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				coalSatchel(startLevel, endLevel);
			}
			//Iron Satchel
			else if (type2 == 2)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				ironSatchel(startLevel, endLevel);
			}
			//Lapis Satchel
			else if (type2 == 3)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				lapisSatchel(startLevel, endLevel);
			}
			//Redstone Satchel
			else if (type2 == 4)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				redstoneSatchel(startLevel, endLevel);
			}
			//Gold Satchel
			else if (type2 == 5)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				goldSatchel(startLevel, endLevel);
			}
			//Diamond Satchel
			else if (type2 == 6)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				diamondSatchel(startLevel, endLevel);
			}
			//Emerald Satchel
			else if (type2 == 7)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				emeraldSatchel(startLevel, endLevel);
			}
			//Amethyst Satchel
			else if (type2 == 8)
			{
				cout << "What is the current level of the Satchel?" << endl;
				//Validate if input is a integer
				while (!(cin >> startLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				cout << "What level do you want to calculate too?" << endl;
				//Validate if input is a integer
				while (!(cin >> endLevel))
				{
					cout << "Error: Invalid Input" << endl;
					cout << "Please enter a valid integer." << endl;
					//Clear input
					cin.clear();
					cin.ignore();
				}
				amethystSatchel(startLevel, endLevel);
			}

			type = 5;
			//End of refined satchel if statement
		}
		//End while loop one
	}
}
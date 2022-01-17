#include <iostream>
#include <string>
using namespace std;


int main()
{
	int response;

	const int MAX_ITEMS = 4;
	int numItems = 0;

	string inventory[MAX_ITEMS];
	inventory[numItems++] = "Sword";
	inventory[numItems++] = "Battle Axe";
	inventory[numItems++] = "Healing Potion";
	inventory[numItems++] = "Dagger";

	cout << "You have come across a Wizards Staff on your journey" << endl;
	cout << "Would you like to replace your dagger with it? Enter 1 for yes 0 for no" << endl;
	cin >> response;

	switch (response)
	{
	case 0:
		cout << "You chose to leave the staff behind. Your current inventory items are:" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << inventory[i] << endl;
		}
		break;
	case 1:
		inventory[3] = ("Wizard Staff");
		cout << "You chose to take the staff and drop your dagger. Your current inventory items are:" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << inventory[i] << endl;
		}
		break;
	}


}
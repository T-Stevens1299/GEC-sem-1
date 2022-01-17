#include <iostream>
using namespace std;

enum Weapon
{
	Sword = 1,
	Dagger,
	Mace,
	Twin_Swords,
	Samurai,
	Wizard_Staff,
	Fire_Potion,
	Ice_Blade,
	Small_Knife,
};

int main()
{
	typedef int Health;

	Weapon CurrentWeapon = Samurai;
	Health CurrentHealth = 13000;

	cout << "My current health is " << CurrentHealth << endl;
	cout << "And the ID of my weapon of choice is " << CurrentWeapon << endl;

}
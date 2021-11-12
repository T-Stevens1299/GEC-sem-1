#include <iostream>
using namespace std;

int PHealth = 1000;
int EHealth = 2000;
bool isPlaying = true;
void attackChoice(int Choice);
void KeepPlaying(bool IsPlaying);

int main()
{
	int PlayerChoice;
	while (isPlaying == true) 
	{
		cout << "You have come across a troll. How do you want to attack it?" << endl;
		cout << "1. Use your Sword" << endl;
		cout << "2. Use Magic" << endl;
		cout << "3. Use your Axe" << endl;

		cin >> PlayerChoice;

		attackChoice(PlayerChoice);

		KeepPlaying(isPlaying);
	
	}
	cout << "Game Ended" << endl;
}

void attackChoice(int Choice) 
{
	int SDamage = 300;
	int MDamage = 650;
	int ADamage = 450;

	int TSDamage = 350;
	int TMDamage = 50;
	int TADamage = 100;

	switch (Choice) 
	{
	case 1:
		EHealth = EHealth - SDamage;
		if (EHealth < 0)
		{
			EHealth = 0;
		}
		PHealth = PHealth - TSDamage;
		if (PHealth < 0)
		{
			PHealth = 0;
		}
		cout << "You hit the troll with your sword, they now have " << EHealth << " health remaining" << endl;
		cout << "The troll hit you with a heavy attack, you now have " << PHealth << " health remaining" << endl;
	break;

	case 2:
		EHealth = EHealth - MDamage;
		if (EHealth < 0)
		{
			EHealth = 0;
		}
		PHealth = PHealth - TMDamage;
		if (PHealth < 0)
		{
			PHealth = 0;
		}
		cout << "You hit the troll with a magic attack, they now have " << EHealth << " health remaining" << endl;
		cout << "The troll hit you with a light attack, you now have " << PHealth << " health remaining" << endl;
	break;

	case 3:
		EHealth = EHealth - ADamage;
		if (EHealth < 0)
		{
			EHealth = 0;
		}
		PHealth = PHealth - TADamage;
		if (PHealth < 0)
		{
			PHealth = 0;
		}
		cout << "You hit the troll with your axe, they now have " << EHealth << " health remaining" << endl;
		cout << "The troll hit you with a medium attack, you now have " << PHealth << " health remaining" << endl;
	break;
	}
}

void KeepPlaying(bool isPlaying) 
{
	char playagain;

	if (EHealth == 0)
	{
		cout << "You have killed the troll and won!" << endl;
		cout << "Do you want to play again y/n?" << endl;
		cin >> playagain;
		if (playagain == 'y') 
		{
			isPlaying = true;
			EHealth = 2000;
			PHealth = 1000;
		}
		else if (playagain == 'n')
		{
			isPlaying = false;
		}
	}

	if (PHealth == 0)
	{
		cout << "The Troll has defeated you!" << endl;
		cout << "Do you want to play again y/n?" << endl;
		cin >> playagain;
		if (playagain == 'y')
		{
			isPlaying = true;
			EHealth = 2000;
			PHealth = 1000;
		}
		else if(playagain == 'n')
		{
			isPlaying = false;
		}
	}
}
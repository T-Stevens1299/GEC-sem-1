#include <iostream>
using namespace std;

int main()
{
	char Status;
	int GameChoice;

	cout << "Are you a Teacher (Enter t), Student (Enter s) or neither (Enter o)" << endl;
	cin >> Status;

	cout << "Which game would you like to purchase? Game 1 or Game 2" << endl;
	cin >> GameChoice;

	switch (GameChoice)
	{
	case 1:
		if (Status == 's' || Status == 't')
		{
			cout << "You are entitled to a 20% discount on this game" << endl;
		}
		else
		{
			cout << "You are not entitled to a discount on this game" << endl;
		}
	break;

	case 2:
		if (Status == 's' || Status == 't')
		{
			cout << "You are entitled to a 10% discount on this game" << endl;
		}
		else
		{
			cout << "You are not entitled to a discount on this game" << endl;
		}
	break;
	}
} 

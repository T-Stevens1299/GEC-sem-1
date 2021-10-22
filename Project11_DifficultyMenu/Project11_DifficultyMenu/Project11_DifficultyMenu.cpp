#include <iostream>
using namespace std;

int main()
{
	int PlayerInput;

	cout << "Select your difficulty:" << endl;
	cout << "1.	I am too young to die!" << endl;
	cout << "2.	Hey, not to rough!" << endl;
	cout << "3.	Hurt me plenty" << endl;
	cout << "4.	Ultra-Violence" << endl;
	cout << "5.	Nightmare Mode" << endl;

	cin >> PlayerInput;

	switch (PlayerInput) 
	{
	case 1:
		cout << "Difficulty Level 1 Selected" << endl;
		cout << "Really you suck this bad?" << endl;
	break;

	case 2:
		cout << "Difficulty Level 2 Selected" << endl;
		cout << "Your new to this game aren't you? Fair enough I guess" << endl;
	break;

	case 3:
		cout << "Difficulty Level 3 Selected" << endl;
		cout << "You are a massochist" << endl;
	break;

	case 4:
		cout << "Difficulty Level 4 Selected" << endl;
		cout << "You are a Psychopath" << endl;
	break;

	case 5:
		cout << "Difficulty Level 5 Selected" << endl;
		cout << "Who hurt you king?" << endl;
	break;
	}

}

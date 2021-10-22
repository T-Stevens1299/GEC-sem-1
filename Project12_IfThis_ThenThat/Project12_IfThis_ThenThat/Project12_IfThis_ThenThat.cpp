#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int PlayerInput;
	int temperature;

	cout << "What is the current temperature?" << endl;
	cin >> temperature;

	cout << "Is it raining (press 1) or snowing (press 2)?" << endl;
	cin >> PlayerInput;

	switch (PlayerInput)
	{
	case 1:
		if (temperature > 15) 
		{
			cout << "Wear a light raincoat" << endl;
		}
		else 
		{
			cout << "Wear a thick raincoat" << endl;
		}
	break;

	case 2:
		if (temperature > 5) 
		{
			cout << "Wear something warm" << endl;
		}
		else if(temperature > 0)
		{
			cout << "Wrap up well and wear multiple layers" << endl;
		}
		else 
		{
			cout << "Stay at home it is too cold to go outside" << endl;
		}
	break;

	default:
		cout << "Have a nice day as it the weather is clear!" << endl;
	break;

	}
}

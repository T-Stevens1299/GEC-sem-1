#include <iostream>
using namespace std;

int main()
{
	int PlayerHealth = 100;
	int PlayerInput;
	for (int i = 1; i < 11; i++) 
	{
		std::cout << "Question " << i << ": How much damage shall I deal?\n";
		cin >> PlayerInput;
		PlayerHealth = PlayerHealth - PlayerInput;
		if (PlayerHealth <= 0) 
		{
			cout << "Early end. The Player Died!" << endl;
			break;
		}
		cout << "All questions asked. The Player survived!" << endl;
	}
}
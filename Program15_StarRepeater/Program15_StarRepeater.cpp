#include <iostream>
using namespace std;

int main()
{
	int NoOfRows;
	bool cont = true;
	int UInput;

	while (cont == true)
	{

		cout << "Please enter a number between 1 and 10" << endl;
		cin >> NoOfRows;
		for (int i = 0; i <= NoOfRows; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " * ";
			}
			cout << "\n";
		}

		cout << "Do you want to continue? 1 for yes, 0 for no" << endl;
		cin >> UInput;

		if (UInput == 1)
		{
			cont = true;


		}
		else if (UInput == 0)
		{
			cont = false;
		}
	}
}
#include <iostream> 
#include <string> 
using namespace std;

int main()

{
	char NameInitials[20];

	cout << "Enter your initals for your first and middile name, followed by your whole surname with spaces inbetween" << endl;
	cout << "In this Formate 'J F Kennedy' " << endl;

	cin.getline(NameInitials, 20);

	cout << NameInitials[0] << endl;
	cout << NameInitials[2] << endl;
	for (int i = 4; i < 20; i++)
	{
		cout << NameInitials[i];
	}
	
}
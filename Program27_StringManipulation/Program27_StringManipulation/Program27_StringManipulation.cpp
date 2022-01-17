#include <iostream>
#include <String>
using namespace std;

int main()
{
	string OutputString = "Do you know who loves C++ XX does!";
	string Name1;
	string Name2;
	int length2 = 0;

	cout << "Enter your name" << endl;
	getline(cin, Name1);
	int length = Name1.length();

	OutputString.insert(27, Name1, 0, Name1.length());
	cout << OutputString << endl;
	OutputString.replace(26, length + 2, Name1);
	cout << OutputString << endl;

	while (length > length2) 
	{
		cout << "Enter another name longer than the last one" << endl;
		getline(cin, Name2);
		length2 = Name2.length();
		
		if (length > length2) 
		{
			cout << "Name wasnt long enough try again" << endl;
		}
	}

	OutputString.replace(26, length, Name2);
	cout << OutputString << endl;

}
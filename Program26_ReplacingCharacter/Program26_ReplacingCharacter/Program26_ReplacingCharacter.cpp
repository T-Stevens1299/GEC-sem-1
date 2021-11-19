#include <iostream>
#include <String>
using namespace std;


int main()
{
	string x = "x";
	string Sentence;

	cout << "Enter a sentence" << endl;
	getline(cin, Sentence);
	int StrLen = Sentence.length();
	cout << StrLen << endl;
	

	for (int i = 0; i < StrLen; i++)
	{
		if (Sentence[i] == 'e') 
		{
			Sentence.replace(i, 1, x);
		}
	}

	cout << Sentence << endl;
}
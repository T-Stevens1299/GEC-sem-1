#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int score;
string name;

void enterScore()
{
	cout << "Enter the players name: " << endl;
	cin >> name;

	cout << "Enter the score: " << endl;
	cin >> score;

	int temp = score;
	string temp1 = name;

	ifstream inFile("ScoreFile.txt");
	inFile.seekg(0, ios::end);
	streampos currentPosition = inFile.tellg();
	cout << currentPosition << endl;
	return;
}

void displayScore()
{
	ifstream inFile("ScoreFile.txt");
	for (int i = 1; i <= 10; i++)
	{
		inFile >> name;
		inFile >> score;

		cout << "Score " << i << ": ";
		cout << name << " " << score << endl;
	}
	inFile.close();
}

int main()
{
	int input = 0;

	while (input != 3)
	{
		cout << " " << endl;
		cout << "What do you want to do?:" << endl;
		cout << " " << endl;
		cout << "1. Enter a new high score" << endl;
		cout << " " << endl;
		cout << "2. Read the high scores" << endl;
		cout << " " << endl;
		cout << "3. Close the program" << endl;

		cin >> input;

		switch (input)
		{
		case 1:
			enterScore();
			break;

		case 2:
			displayScore();
			break;

		case 3:
			cout << "Program Terminated" << endl;
			break;
		}

	}
}
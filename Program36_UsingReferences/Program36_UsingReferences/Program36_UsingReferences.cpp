#include <iostream>
using namespace std;

void Add25(int& rNum);

void Minus25(int& rNum);

int main()
{
	int num;
	int& rNum = num;

	cout << "Enter a number" << endl;
	cin >> num;
	cout << "num = " << num << endl;


	Add25(num);
	cout << "num = " << num << endl;


	cout << "Enter another number" << endl;
	cin >> num;
	cout << "num = " << num << endl;


	Minus25(num);
	cout << "num = " << num << endl;
}

void Add25(int& rNum)
{
	rNum = rNum + 25;
}

void Minus25(int& rNum)
{
	rNum = rNum - 25;
}
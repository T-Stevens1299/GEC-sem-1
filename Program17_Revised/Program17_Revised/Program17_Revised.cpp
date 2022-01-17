#include <iostream>
using namespace std;

void EvenOrOdd(int n);
void outputResults(int numOfOdd, int numOfEven, int oddTotal, int evenTotal);
bool isEven;

int main()
{
	int UserNum;
	int NumOfEven = 0;
	int NumOfOdd = 0;
	int OddSum = 0;
	int EvenSum = 0;

	cout << "Enter 10 numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> UserNum;

		EvenOrOdd(UserNum);

		if (isEven == true)
		{
			NumOfEven = NumOfEven + 1;
			EvenSum = EvenSum + UserNum;
		}
		else
		{
			NumOfOdd = NumOfOdd + 1;
			OddSum = OddSum + UserNum;
		}
	}

	outputResults(NumOfOdd, NumOfEven, OddSum, EvenSum);

}

void EvenOrOdd(int num)
{

	if (num % 2 == 0)
	{
		isEven = true;
	}
	else
	{
		isEven = false;
	}
	return;
}

void outputResults(int OddNum, int EvenNum, int oddTotal, int evenTotal)
{
	cout << "There were " << EvenNum << " even numbers" << endl;

	cout << "The sum of the even numbers was " << evenTotal << endl;

	cout << "There were " << OddNum << " odd numbers" << endl;

	cout << "The sum of the even numbers was " << oddTotal << endl;
}
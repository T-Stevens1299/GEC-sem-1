#include <iostream>
using namespace std;

void EvenOrOdd(int n);
void outputResults (int numOfOdd, int numOfEven, int oddTotal, int evenTotal);
bool isEven;
int NumOfOdd;
int NumOfEven;

int main()
{
	int UserNum;
	int NumOfEven = 0;
	int NumOfOdd = 0;
	int OddSum = 0;
	int EvenSum = 0;


	for (int i = 0; i < 10; i++) 
	{
		cout << "Enter a number to see if it is odd or even" << endl;
		cin >> UserNum;

		EvenOrOdd(UserNum);
		
		if (isEven == true) 
		{
			EvenSum = EvenSum + UserNum;
		}
		else
		{
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
		NumOfEven = NumOfEven + 1;
	}
	else 
	{
		isEven = false;
		NumOfOdd = NumOfOdd + 1;
	}
}

void outputResults(int OddNum,int EvenNum, int oddTotal, int evenTotal) 
{
	cout << "There were " << NumOfEven << " even numbers" << endl;

	cout << "The sum of the even numbers was " << evenTotal << endl;

	cout << "There were " << NumOfOdd << " odd numbers" << endl;

	cout << "The sum of the even numbers was " << oddTotal << endl;
}
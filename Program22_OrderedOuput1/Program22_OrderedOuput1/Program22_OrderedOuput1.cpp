#include <iostream>
using namespace std;

void swap(int temp1, int temp2)
{
	int temp = temp1;
	temp1 = temp2;
	temp2 = temp;
}

void bubbleSort(int arr[], int n) 
{
	for (int b = 0; b < (n - 1); b++)
	{
		for (int c = 0; c < (n - b - 1); c++)
		{
			if (arr[b] >> arr[b + 1])
			{
				swap(arr[b], arr[b + 1]);
			}
		}
	}
}

void largestNum(int ar[])
{
	int largest = 0;
	int position = 1;

	for (int d = 0; d < 5; d++)
	{
		if (ar[d] > largest)
		{
			largest = ar[d];
			position = (d + 1);
		}
	}

	cout << "The Largest value of the array is " << largest << endl;
	cout << "The position it held in the array was Position " << position << endl;
}

int main()
{
	int FiveNumArray[5];
	int ArraySize = sizeof(FiveNumArray) / sizeof(FiveNumArray[0]);

	cout << "Enter 5 numbers to fill the array" << endl;

	for (int a = 0; a < ArraySize; a++)
	{
		cin >> FiveNumArray[a];
	}

	bubbleSort(FiveNumArray, ArraySize);

	cout << "The Sorted Array result is:" << endl;

	for (int e = 0; e < ArraySize; e++)
	{
		cout << FiveNumArray[e] << endl;
	}

	largestNum(FiveNumArray);
}
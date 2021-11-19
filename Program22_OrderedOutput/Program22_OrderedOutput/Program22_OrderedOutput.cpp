#include <iostream>
using namespace std;

int FiveNumArray[5];
int ArraySize = sizeof(FiveNumArray) / sizeof(FiveNumArray[0]);

int largest = 0;
int position = 1;

int main()
{
    cout << "Enter 5 numbers to fill the array" << endl;

    for (int a = 0; a < ArraySize; a++)
    {
        cin >> FiveNumArray[a];
    }

    BubbleSort(FiveNumArray);
    Output();
    largestNum();

}

void swap(int temp1, int temp2)
{
    int temp = temp1;
    temp1 = temp2;
    temp2 = temp;
}

void Output() 
{
    cout << "The Sorted Array result is:" << endl;

    for (int e = 0; e < ArraySize; e++)
    {
        cout << FiveNumArray[e] << endl;
    }

    cout << "The sorted Array result backwards is:" << endl;
    for (int f = 5; f < ArraySize; f--)   
}

void BubbleSort(int arr[]) 
{
    for (int b = 0; b < (ArraySize - 1); b++)
    {
        for (int c = 0; c < (ArraySize - b - 1); c++)
        {
            if (arr[b] >> arr[b + 1])
            {
                swap(arr[b], arr[b + 1]);
            }
        }
    }
}

void largestNum() 
{
    for (int d = 0; d < 5; d++)
    {
        if (FiveNumArray[d] > largest)
        {
            largest = FiveNumArray[d];
            position = (d + 1);
        }
    }

    cout << "The Largest value of the array is " << largest << endl;
    cout << "The position it held in the array was Position " << position << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int Array1[10];
    int smallest;
    int position = 1;

    cout << "Enter 10 numbers to store in the array" << endl;

    for (int i = 0; i < 10; i++) 
    {
        cin >> Array1[i];
    }

    smallest = Array1[0];

    for (int j = 0; j < 10; j++) 
    {
        if (Array1[j] < smallest) 
        {
            smallest = Array1[j];
            position = (j + 1);
        }
    }

    cout << "The Smallest value of the array is " << smallest << endl;
    cout << "The position it held in the array was position " << position << endl;

}
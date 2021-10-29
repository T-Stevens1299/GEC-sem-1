#include <iostream>
using namespace std;

int main()
{
    float num1;
    float num2;
    float num3 = 1;
    float mean;
    float sum;
    float counter = 3;

    cout << "Enter two numbers to find the sum and mean of" << endl;
    cin >> num1;
    cin >> num2;
    mean = (num1 + num2) / 2;
    sum = (num1 + num2);

    cout << "The mean of the numbers is " << mean << endl;
    cout << "The sum of the numbers is " << sum << endl;


    while (num3 != 0) 
    {
        cout << "Enter another number to find the mean and sum of" << endl;
        cin >> num3;
        sum = sum + num3;
        mean = (sum / counter);
        cout << "The mean of the numbers is " << mean << endl;
        cout << "The sum of the numbers is " << sum << endl;
        counter = counter + 1;
    }
}
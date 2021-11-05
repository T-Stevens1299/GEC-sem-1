#include <iostream>
using namespace std;

void SmallestNum(int n1, int n2);

int SmallNum;

int main()
{
    int num1;
    int num2;


    cout << "Enter two numbers to see which one is smallest:" << endl;

    cin >> num1;
    cin >> num2;

    SmallestNum(num1, num2);

}

void SmallestNum(int n1, int n2)
{

    if (n1 < n2)
    {
        SmallNum = n1;
        cout << "The smallest number was: " << SmallNum << endl;
    }
    else if (n2 < n1)
    {
        SmallNum = n2;
        cout << "The smallest number was: " << SmallNum << endl;
    }
    else
    {
        cout << "Both Numbers are the same" << endl;
    }
}
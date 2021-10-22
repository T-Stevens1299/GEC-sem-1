#include <iostream>
using namespace std;

int main()
{
    float mySavings = 2000.00f;
    float yourPercentage = 50.00f;
    float yourShare = (mySavings * (yourPercentage / 100));

    cout << "Your share: " << yourShare << endl;

    return 0;
}

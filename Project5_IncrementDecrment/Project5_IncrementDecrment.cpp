#include <iostream>
using namespace std;

int main()
{
    //Initialise num to 1
    int num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;
    /* reset num to 1
    
    "/*" can make comments span multiple line */
    num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator after num = " << num++ << endl;
    cout << "num after = " << num << endl;

    //Reset num to 1
    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator before num = " << --num << endl;
    cout << "num after = " << num << endl;

    //Reset num to 1 again
    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num = " << num-- << endl;
    cout << "num after = " << num << endl;

    return 0;
}

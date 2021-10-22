#include <iostream>
using namespace std;

int main()
{
    int Haribo = 40;
    int StudentsPresent = 14;
    int PacketsPerStudent;
    int PacketsRemaining;

    PacketsPerStudent = (Haribo / StudentsPresent);

    PacketsRemaining = (Haribo % StudentsPresent);

    cout << "The packets per student are : " << PacketsPerStudent << endl;
    cout << "The packets remaining are : " << PacketsRemaining << endl;

}

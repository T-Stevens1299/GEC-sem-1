#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);

void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
	int num1;
	int num2;
	int* pNum = &num1;

	inputDetails(&num1, &num2);

	cout << "Output when pNum is assigned to num1:" << endl;

	outputDetails(num1, num2, pNum);

	pNum = &num2;

	cout << "Output when pNum is assigned to num2:" << endl;

	outputDetails(num1, num2, pNum);
}

void inputDetails(int* n1, int* n2) 
{
	int nm1;
	int nm2;

	cout << "Enter two numbers" << endl;
	cin >> nm1;
	cin >> nm2;

	*n1 = nm1;
	*n2 = nm2;
}

void outputDetails(int& integer1, int& integer2, int* pointer) 
{
	cout << "num1 value:" << integer1 << endl;
	cout << "num1 address in memory: " << &integer1 << endl;
	cout << "" << endl;
	cout << "num2 value:" << integer2 << endl;
	cout << "num2 address in memory: " << &integer2 << endl;
	cout << "" << endl;
	cout << "Value of pNum: " << *pointer << endl;
	cout << "pNum derefenced value: " << &pointer << endl;
	cout << "Memory Address of pNum: " << pointer << endl;
	cout << "" << endl;
}

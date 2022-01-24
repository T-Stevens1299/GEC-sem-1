#include "Cat.h"
using namespace std;

void Cat::Talk() 
{
	cout << "'Meow' I am your cat and I feel:" << endl;

	Pet::Talk();
}
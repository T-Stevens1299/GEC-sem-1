#include "Dog.h"
using namespace std;

void Dog::Talk()
{
	cout << "'Woof' I am your Dog and I feel:" << endl;

	Pet::Talk();
}
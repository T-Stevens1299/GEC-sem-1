#include <iostream>
#include <stdlib.h>

#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

using namespace::std;

int main() 
{
	int choice;
	int PetChoice;

	Pet* petPointer = new Pet(4, 4);

	cout << "A new pet has arrived! " << endl;

	cout << "What pet do you want?" << endl;
	cout << "Press 1 to get a hamster" << endl;
	cout << "Press 2 to get a cat" << endl;
	cout << "Press 3 to get a dog" << endl;

	cin >> PetChoice;

	switch (PetChoice) 
	{
	case 1:
		petPointer = new Hamster(0, 0);
		break;

	case 2:
		petPointer = new Cat(0, 0);
		break;

	case 3:
		petPointer = new Dog(0, 0);
		break;

	default:
		petPointer = new Pet(0, 0);
		break;		
	}
	
	bool Continue = true;

	while (Continue = true) 
	{
		cout << "Pet Intercation Menu:" << endl;
		cout << "Press 0 to quit" << endl;
		cout << "Press 1 to listen to your pet" << endl;
		cout << "Press 2 to feed your pet" << endl;
		cout << "Press 3 to play with your pet" << endl;

		cin >> choice;

		switch (choice)
		{
		case 0:
			Continue = false;    
			exit(2);
			break;

		case 1:
			petPointer->Talk();
			break;

		case 2:
			petPointer->Feed();
			break;

		case 3:
			petPointer->Play();
			break;

		default:
			cout << "Not a valid input, try again" << endl;
			break;
		}
	}

	return 0;

}
#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
	Dog(int hunger = 0, int boredom = 0) :Pet(hunger = 0, boredom = 0) {};
	~Dog();

	void Talk()override;
};
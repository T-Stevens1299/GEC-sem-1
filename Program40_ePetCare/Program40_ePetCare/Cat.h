#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
	Cat(int hunger = 0, int boredom = 0) :Pet(hunger = 0, boredom = 0) {};
	~Cat();

	void Talk()override;
};


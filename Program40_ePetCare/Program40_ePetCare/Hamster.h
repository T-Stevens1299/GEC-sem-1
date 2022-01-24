#pragma once
#include "Pet.h"

class Hamster : public Pet
{
public:
	Hamster(int hunger = 0, int boredom = 0) :Pet(hunger = 0, boredom = 0) {};
	~Hamster();

	void Talk()override;
};


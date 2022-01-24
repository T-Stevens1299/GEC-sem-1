#include "Pet.h"
#include <iostream>

using namespace std;

Pet::Pet(int hunger, int boredom) 
{
	m_hunger = hunger;
	m_bored = boredom;
}

void Pet::Feed(int food) 
{
	cout << "You fed your pet!" << endl;

	m_hunger -= food;

	if (m_hunger < 0) 
	{
		m_hunger = 0;
	}
	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "You played with your pet!" << endl;

	m_bored -= fun;

	if (m_bored < 0)
	{
		m_bored = 0;
	}

	PassingTime();
}

void Pet::Talk()
{
	int mood = GetMood(m_hunger, m_bored);

	if (mood >= 15)
	{
		cout << "Mad" << endl;
	}
	else if (mood >= 10)
	{
		cout << "Frustrated" << endl;
	}
	else if (mood >= 5)
	{
		cout << "Okay" << endl;
	}
	else
	{
		cout << "Happy" << endl;
	}

	PassingTime();
}

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}
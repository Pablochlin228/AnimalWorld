#include "Lion.h"

void Lion::Eat(Herbivore* obj)
{
	if (power > obj->GetWeight())
	{
		power += 10;
	}
	else
	{
		power -= 10;
	}
}

void Lion::Init()
{
	cout << "===Enter information about lion=== " << endl;
	Carnivore::Init();
}

void Lion::Print()
{
	cout << "=====Lion=====" << endl;
	Carnivore::Print();
	cout << "==============" << endl;
}

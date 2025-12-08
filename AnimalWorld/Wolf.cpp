#include "Wolf.h"

void Wolf::Eat(Herbivore* obj)
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

void Wolf::Init()
{
	cout << "===Enter information about wolf=== " << endl;
	Carnivore::Init();
}

void Wolf::Print()
{
	cout << "=====Wolf=====" << endl;
	Carnivore::Print();
	cout << "==============" << endl;
}

#include "Wildebeest.h"

void Wildebeest::EatGrass()
{
	Herbivore::EatGrass();
}

void Wildebeest::Print()
{
	cout << "=====Wildebeest=====" << endl;
	Herbivore::Print();
	cout << "====================" << endl;
}

void Wildebeest::Init()
{
	Herbivore::Init();
}

double Wildebeest::GetWeight()
{
	Herbivore::GetWeight();
}


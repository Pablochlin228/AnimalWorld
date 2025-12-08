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
	cout << "===Enter information about wildebeest=== " << endl;
	Herbivore::Init();
}

double Wildebeest::GetWeight()
{
	return Herbivore::GetWeight();
}


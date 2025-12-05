#include "Bison.h"

Bison::Bison(string n, double w)
{
	isLife = true;
}

void Bison::EatGrass()
{
	Herbivore::EatGrass();
}

void Bison::Print()
{
	cout << "=====Bison=====" << endl;
	Herbivore::Print();
	cout << "===============" << endl;
}

void Bison::Init()
{
	cout << "===Enter information about bison=== " << endl;
	Herbivore::Init();
}

double Bison::GetWeight()
{
	Herbivore::GetWeight();
}

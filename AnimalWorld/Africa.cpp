#include "Africa.h"

void Africa::AddHerbivores(Herbivore* obj)
{
	africa.push_back(obj);
}

void Africa::AddCarnivore(Carnivore* obj)
{
	cout << "Warning: Africa can only have herbivores!" << endl;
	delete obj;
}

void Africa::PrintInfo()
{
	cout << "======Africa======" << endl;
	Continent::PrintHerbivore();
}

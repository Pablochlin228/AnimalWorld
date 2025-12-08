#include "NorthAmerica.h"

void NorthAmerica::AddHerbivores(Herbivore* obj)
{
	cout << "Warning: North America can only have carnivores!" << endl;
	delete obj;
}

void NorthAmerica::AddCarnivore(Carnivore* obj)
{
	northAmerica.push_back(obj);
}

void NorthAmerica::PrintInfo()
{
	cout << "======North America======" << endl;
	Continent::PrintCarnivore();
}

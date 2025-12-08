#pragma once
#include "Continent.h"
using namespace std;

class NorthAmerica:public Continent
{
public:
	NorthAmerica() {}
	void AddHerbivores(Herbivore* obj);
	void AddCarnivore(Carnivore* obj);
	void PrintInfo();
};


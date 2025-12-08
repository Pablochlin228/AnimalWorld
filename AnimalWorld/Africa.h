#pragma once
#include "Continent.h"
using namespace std;


class Africa:public Continent
{
public:
	Africa() {}
	void AddHerbivores(Herbivore* obj);
	void AddCarnivore(Carnivore* obj);
	void PrintInfo();
};


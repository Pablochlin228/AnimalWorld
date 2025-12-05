#pragma once
#include <iostream>
#include <vector>
#include "Carnivore.h"
#include "Herbivore.h"
using namespace std;

class Continent
{
protected:
	vector<Herbivore*> africa;
	vector<Carnivore*> northAmerica;
public:
	Continent() {}
	virtual void AddHerbivores(Herbivore* obj);
	virtual void AddCarnivore(Carnivore* obj);
	virtual void PrintInfo() = 0;

};


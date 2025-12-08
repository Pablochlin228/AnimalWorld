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
	virtual void AddHerbivores(Herbivore* obj) = 0;
	virtual void AddCarnivore(Carnivore* obj) = 0;
	virtual void PrintInfo() = 0;
	void PrintHerbivore();
	void PrintCarnivore();
	void FeedAllHerbivores();
	void HuntAllCarnivores();
};


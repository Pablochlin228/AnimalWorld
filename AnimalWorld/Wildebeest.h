#pragma once
#include <iostream>
using namespace std;
#include "Herbivore.h"

class Wildebeest:public Herbivore
{
public:
	Wildebeest() {}
	Wildebeest(string n, double w) : Herbivore(n,w) {}
	void EatGrass();
	void Print();
	void Init();
	double GetWeight();
};


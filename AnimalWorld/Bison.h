#pragma once
#include <iostream>
using namespace std;
#include "Herbivore.h"

class Bison :public Herbivore
{
public:
	Bison() {}
	Bison(string n, double w) : Herbivore(n, w) {};
	void EatGrass();
	void Print();
	void Init();
	double GetWeight();
};


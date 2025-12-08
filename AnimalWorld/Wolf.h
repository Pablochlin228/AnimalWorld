#pragma once
#include <iostream>
using namespace std;
#include "Carnivore.h"

class Wolf:public Carnivore
{
public:
	Wolf() {}
	Wolf(string n, double p) : Carnivore(n, p) {};
	void Eat(Herbivore* obj);
	void Init();
	void Print();
};


#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Herbivore.h"

class Carnivore :public Animal
{
protected:
	double power;
public:
	Carnivore() {}
	Carnivore(string n, double p) : Animal(n), power(p) {}
	virtual void Eat(Herbivore* obj) = 0;
	void Init();
	void Print();
};


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
	Carnivore(string n, double p) :Animal(n);
	void Eat(Herbivore* obj);
	void Init();
	void Print();
};


#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"

class Herbivore:public Animal
{
protected:
	double weight;
	bool isLife;
public:
	Herbivore() : Animal(), weight(0), isLife(true) {}
	Herbivore(string n, double w) : Animal(n), weight(w), isLife(true) {}
	void EatGrass();
	void Print();
	void Init();
	double GetWeight();
};


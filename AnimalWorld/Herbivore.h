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
	Herbivore() {}
	Herbivore(string n, double w) :isLife(true), Animal(n) {};
	void EatGrass();
	void Print();
	void Init();
	double GetWeight();
};


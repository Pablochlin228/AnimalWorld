#include "Herbivore.h"

Herbivore::Herbivore(string n, double w)
{
	weight = w;
}

void Herbivore::EatGrass()
{
	weight += 10;
}

void Herbivore::Print()
{
	Animal::Print();
	cout << "Weight: " << weight << endl;
	if (isLife)
	{
		cout << "Life status: Life" << endl;
	}
	else
	{
		cout << "Life status: Die" << endl;
	}
}

double Herbivore::GetWeight()
{
	return weight;
}

void Herbivore::Init()
{
	int check;
	Animal::Init();
	cout << "Enter the weight(min = 10,max = 50): ";
	cin >> check;
	if (check <= 50 && check >= 10)
	{
		weight = check;
	}
	else
	{
		weight = 30;
	}
}



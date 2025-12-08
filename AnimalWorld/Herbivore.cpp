#include "Herbivore.h"

void Herbivore::EatGrass()
{
	if (isLife)
	{
		if (weight < 50)
		{
			weight += 10;
		}
	}
	else
	{
		cout << "Animal is dead and cannot eat." << endl;
	}
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



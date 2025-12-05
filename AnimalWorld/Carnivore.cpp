#include "Carnivore.h"

Carnivore::Carnivore(string n, double p)
{
	power = p;
}

void Carnivore::Eat(Herbivore* obj)
{
	if (power > obj->GetWeight())
	{
		power += 10;
	}
	else
	{
		power -= 10;
	}
}

void Carnivore::Init()
{
	int check;
	Animal::Init();
	cout << "Enter the power(min = 10,max = 50): ";
	cin >> check;
	if (check <= 50 && check >= 10)
	{
		power = check;
	}
	else
	{
		power = 30;
	}
}

void Carnivore::Print()
{
	Animal::Print();
	cout << "Power: " << power << endl;
}

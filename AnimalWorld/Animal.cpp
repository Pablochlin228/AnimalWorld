#include "Animal.h"

Animal::Animal(string n)
{
	name = n;
}

void Animal::Print()
{
	cout << "Name: " << name << endl;
}

void Animal::Init()
{
	cout << "Enter name of the animal:";
	cin >> name;
}

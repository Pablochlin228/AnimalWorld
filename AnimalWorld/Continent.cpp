#include "Continent.h"

void Continent::PrintHerbivore()
{
	if (africa.empty())
	{
		cout << "No herbivores in this continent" << endl;
		return;
	}
	cout << "Animals: " << endl;
	for (auto herbior:africa)
	{
		cout << "==========" << endl;
		herbior->Print();
		cout << "==========" << endl;
	}
	cout << endl;
}

void Continent::PrintCarnivore()
{
	if (northAmerica.empty())
	{
		cout << "No carnivores in this continent" << endl;
		return;
	}
	cout << "Animals: " << endl;
	for (auto carnivore : northAmerica)
	{
		cout << "==========" << endl;
		carnivore->Print();
		cout << "==========" << endl;
	}
	cout << endl;
}

void Continent::FeedAllHerbivores()
{
	if (africa.empty())
	{
		cout << "Not enough animals for feeding!" << endl;
		return;
	}

	for (auto herbivore : africa)
	{
		herbivore->EatGrass();
	}
}

void Continent::HuntAllCarnivores()
{
	if (africa.empty() || northAmerica.empty())
	{
		cout << "Not enough animals for hunting!" << endl;
		return;
	}
	for (auto carnivore : northAmerica)
	{
		for (auto herbivore : africa)
		{
			carnivore->Eat(herbivore);
		}
	}
}

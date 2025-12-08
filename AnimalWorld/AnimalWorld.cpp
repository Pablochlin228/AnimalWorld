#include <iostream>
using namespace std;
#include "Wildebeest.h"
#include "Bison.h"
#include "Wolf.h"
#include "Lion.h"
#include "Continent.h"
#include <vector>
#include "Africa.h"
#include "NorthAmerica.h"
#include "Animal.h"
#include "Carnivore.h"
#include "Herbivore.h"

int main()
{
	vector<Continent*>continents;
	continents.push_back(new Africa);
	continents.push_back(new NorthAmerica);
	Herbivore* ptr = nullptr;
	Carnivore* ptr2 = nullptr;

	while (true)
	{
		int choice;
		cout << "Enter the option: " << endl;
		cout << "1)Add wildebeest" << endl;
		cout << "2)Add bison" << endl;
		cout << "3)Add lion" << endl;
		cout << "4)Add wolf" << endl;
		cout << "5)Feed all herbivores animals" << endl;
		cout << "6)Hunt on all herbivores animals" << endl;
		cout << "7)Show all herbivores " << endl;
		cout << "8)Show all carnivores" << endl;
		cout << "9)Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			ptr = new Wildebeest;
			ptr->Init();
			continents[0]->AddHerbivores(ptr);
			break;
		case 2:
			ptr = new Bison;
			ptr->Init();
			continents[0]->AddHerbivores(ptr);
			break;
		case 3:
			ptr2 = new Lion;
			ptr2->Init();
			continents[1]->AddCarnivore(ptr2);
			break;
		case 4:
			ptr2 = new Wolf;
			ptr2->Init();
			continents[1]->AddCarnivore(ptr2);
			break;
		case 5:
			for (auto continent : continents)
			{
				continent->FeedAllHerbivores();
			}
			break;
		case 6:
			for (auto continent : continents)
			{
				continent->HuntAllCarnivores();
			}
			break;
		case 7:
			for (auto continent : continents)
			{
				continent->PrintHerbivore();
			}
			break;
		case 8:
			for (auto continent : continents)
			{
				continent->PrintCarnivore();
			}
			break;
		case 9:
			cout << "Exit..." << endl;
			return false;
		default:
			cout << "Incorrect option!" << endl;
			break;
		}
	}

}
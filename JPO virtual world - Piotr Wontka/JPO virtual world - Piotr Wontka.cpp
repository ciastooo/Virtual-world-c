// JPO virtual world - Piotr Wontka.cpp
// Informatyka niestacjonarnie semstr III.
// Indeks: 167951
// Implementacja zwierząt: Wilk, Owca, (Królik), Lis, Lew
// Implementacja roślin: Trawa, Wilcze jagody, Cierń 
//

#include <iostream>
#include "World.h"
#include "Wolf.h"
#include "Sheep.h"
#include "Fox.h"
#include "Lion.h"
#include "Rabbit.h"
#include "Grass.h"

using namespace std;

int main()
{
	locale locpl("Polish_Poland");
	locale::global(locpl);
	cout.imbue(locpl);
	cin.imbue(locpl);
	cout.imbue(locale(""));
	World *world = new World(20, 20);
	Wolf *test = new Wolf(world, 1, 2);
	Wolf *test1 = new Wolf(world, 1, 1);
	Fox *test2 = new Fox(world, 2, 1);
	Fox *test3 = new Fox(world, 10, 9);
	Sheep *test4 = new Sheep(world, 8, 9);
	Sheep *test5 = new Sheep(world, 9, 10);
	Lion *test6 = new Lion(world, 2, 2);
	Rabbit *test7 = new Rabbit(world, 18, 19);
	Rabbit *test8 = new Rabbit(world, 19, 18);
	Grass *test9 = new Grass(world, 15, 15);
	Grass *test10 = new Grass(world, 12, 12);
	world->insertOrganism(test);
	world->insertOrganism(test1);
	world->insertOrganism(test2);
	world->insertOrganism(test3);
	world->insertOrganism(test4);
	world->insertOrganism(test5);
	world->insertOrganism(test6);
	world->insertOrganism(test7);
	world->insertOrganism(test8);
	world->insertOrganism(test9);
	world->insertOrganism(test10);
	world->draw();
	int i = 0;
	while (true)
	{
		world->Tick();
		getchar();
	}
	delete world;
	return 0;
}
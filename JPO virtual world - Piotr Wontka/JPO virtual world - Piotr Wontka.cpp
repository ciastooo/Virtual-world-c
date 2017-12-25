// JPO virtual world - Piotr Wontka.cpp
// Informatyka niestacjonarnie semstr III.
// Indeks: 167951
// Implementacja zwierząt: Wilk, Owca, (Nosorożec), Lis, Lew
// Implementacja roślin: Trawa, Wilcze jagody, Cierń 
//

#include <iostream>
#include "World.h"
#include "Animal.h"

using namespace std;

int main()
{
	locale locpl("Polish_Poland");
	locale::global(locpl);
	cout.imbue(locpl);
	cin.imbue(locpl);
	cout.imbue(locale(""));
	World *world = new World(10, 10);
	Animal *test = new Animal(world, 10, 10, 1, 2, 'A');
	Animal *test1 = new Animal(world, 10, 10, 1, 1, 'A');
	Animal *test2 = new Animal(world, 15, 15, 3, 3, 'B');
	Animal *test3 = new Animal(world, 15, 15, 3, 4, 'B');
	world->insertOrganism(test);
	world->insertOrganism(test1);
	//world->insertOrganism(test2);
	//world->insertOrganism(test3);
	world->draw();
	while (true)
	{
		world->Tick();
		getchar();
	}
	return 0;
}
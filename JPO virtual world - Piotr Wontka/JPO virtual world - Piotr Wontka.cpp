// JPO virtual world - Piotr Wontka.cpp
// Informatyka niestacjonarnie semstr III.
// Indeks: 167951
// Implementacja zwierząt: Wilk, Owca, (Nosorożec), Lis, Lew
// Implementacja roślin: Trawa, Wilcze jagody, Cierń 
//

#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	int x, y;
	while (true) {
		cin >> x;
		cin >> y;
		system("cls");
		World *world = new World(x, y);
		world->draw();
		delete world;
	}
	char test;
	cin >> test;
    return 0;
}
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int zCount = 3;
	Zombie *zombiePtr = zombieHorde(zCount, "kubra");

	for(int i = 0; i < zCount; i++)
	{
		zombiePtr[i].announce();
	}
	delete[]zombiePtr;
}

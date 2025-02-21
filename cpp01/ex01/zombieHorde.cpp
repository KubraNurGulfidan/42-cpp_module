#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieH = new Zombie[N];
	zombieH->setName(name);
	for (int i = 0; i < N; i++)
	{
		zombieH[i].setName(name);
	}
	return zombieH;
}

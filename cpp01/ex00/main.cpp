#include "Zombie.hpp"

int main()
{
	Zombie zombie;
	Zombie *zombiePtr = zombie.newZombie("Kubra");

	zombie.randomChump("Zeynep");
	zombiePtr->announce();
	delete(zombiePtr);
}
#include "Zombie.hpp"

Zombie::Zombie()
{
	static int i = 1;
	this->zombieCount = i;
	std::cout << "Create Zombie " << i << std::endl;
	i++;
}

Zombie::~Zombie()
{
	std::cout << "Delete " << this->zombieCount << ". Zombie: " << this->name << std::endl;
}

void Zombie::setName(std::string setName){name = setName;}
std::string getName(){return name;}


void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
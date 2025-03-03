#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot1("Kubra");
	ClapTrap bot2(bot1);
	ClapTrap bot3;
	bot3 = bot1;

	bot1.attack("Enemy");
	bot1.takeDamage(5);
	bot1.beRepaired(3);
	bot1.attack("Enemy");

	return 0;
}

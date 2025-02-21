#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	~HumanB();
	void  attack();
	void setWeapon(Weapon *input);
	void setName(std::string input){name = input;}
	std::string getName(){return name;}
};

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

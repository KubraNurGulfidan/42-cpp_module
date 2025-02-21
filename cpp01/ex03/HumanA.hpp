#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanA();
	~HumanA();
	void  attack();
	void setWeapon(Weapon *input);
	void setName(std::string input){name = input;}
	std::string getName(){return name;}
};

HumanA::HumanA()
{
}

HumanA::~HumanA()
{
}

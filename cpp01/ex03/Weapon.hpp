#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	~Weapon();
	void setType(std::string input){type = input;}
	const std::string getType(){return type;}
};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

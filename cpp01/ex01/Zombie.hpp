#include <iostream>

class Zombie
{
private:
	std::string name;
	int zombieCount;
public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string setName){name = setName;}
	std::string getName(){return name;}
};

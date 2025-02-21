#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce(void);
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	void setName(std::string setName){name = setName;}
	std::string getName(){return name;}

};

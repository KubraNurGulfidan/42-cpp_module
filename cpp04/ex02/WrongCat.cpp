#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Cat Destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Cat Copy Constructor called!" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Cat assigment operator has been called!" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "We are wrong Meeooww.." << std::endl;
}
#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Undefined";
	std::cout << "Animal Default Constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal Copy Constructor called!" << std::endl;
}

Animal &Animal::operator = (const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Animal assigment operator has been called!" << std::endl;
	return *this;	
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animals make sound" << std::endl;
}
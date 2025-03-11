#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator = (const Dog &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Dog assigment operator has been called!" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof.." << std::endl;
}
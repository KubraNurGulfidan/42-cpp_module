#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor called!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Dog Copy Constructor called!" << std::endl;
}

Dog &Dog::operator = (const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Dog assigment operator has been called!" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof.." << std::endl;
}

void Dog::setDogIdea(std::string str)
{
	brain->setAllIdeas(str);
}

void Dog::printNidea(int i)
{
	this->brain->printNidea(i);
}

void Dog::printBrainAddress()
{
	std::cout << this->brain << std::endl;
}
#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	std::cout << "Brain Default Constructor called!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called!" << std::endl;
	delete[] this->ideas;
}

Brain::Brain(const Brain &copy)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Brain Copy Constructor called!" << std::endl;
}

Brain &Brain::operator = (const Brain &copy)
{
	if (this != &copy)
	{
		delete[] this->ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain assigment operator has been called!" << std::endl;
	return *this;
}

void Brain::setAllIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void Brain::printNidea(int i)
{
	if (i < 0 || i > 99)
		return;
	for (int j = 0; j < i; j++)
		std::cout << j + 1 << " Idea : " << this->ideas[j] << std::endl;

}

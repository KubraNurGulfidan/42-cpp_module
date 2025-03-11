#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog &operator = (const Dog &copy);

	virtual void makeSound() const;
	void setDogIdea(std::string str);
	void printNidea(int i);
	void printBrainAddress();
};

#endif
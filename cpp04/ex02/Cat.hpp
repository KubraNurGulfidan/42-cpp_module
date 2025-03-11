#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &copy);
	Cat &operator = (const Cat &copy);

	virtual void makeSound() const;
	void setCatIdea(std::string str);
	void printIdea(int i);
	void printBrainAddress();
};

#endif
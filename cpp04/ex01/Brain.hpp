#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain &operator = (const Brain &copy);

	void setAllIdeas(std::string idea);
	void printNidea(int i);
};

#endif
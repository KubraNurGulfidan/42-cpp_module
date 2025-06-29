#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "iostream"

class Intern
{
private:
	/* data */
public:
	Intern();
	~Intern();
	Intern(const std::string& name);
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

	AForm* makeForm(const std::string& formName, const std::string& target) const;
};




#endif
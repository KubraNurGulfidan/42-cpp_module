#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    if (formName == "shrubbery creation") {
        std::cout << "Intern creates " << formName << std::endl;
        return new ShrubberyCreationForm(target);
    } else if (formName == "robotomy request") {
        std::cout << "Intern creates " << formName << std::endl;
        return new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        std::cout << "Intern creates " << formName << std::endl;
        return new PresidentialPardonForm(target);
    } else {
        std::cout << "Intern couldn't find the form: " << formName << std::endl;
        return NULL;
    }
}


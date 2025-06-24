#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat a("Alice", 50);
	Bureaucrat b("Bella", 150);

	Form f("First Form", 75, 100);
	Form s("Second Form", 50, 60);

	std::cout << a;
	std::cout << b;

	std::cout << f;
	std::cout << s;

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		a.signForm(f);
		std::cout << f;
	}
	catch (const std::exception& e)
	{
		std::cout << a.getName() << " couldn't sign " << f.getName() 
			<< " because " << e.what() << std::endl;
	}

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		b.signForm(s);
		std::cout << s;
	}
	catch (const std::exception& e)
	{
		std::cout << b.getName() << " couldn't sign " << s.getName()
			<< " because " << e.what() << std::endl;
	}

	return 0;
}
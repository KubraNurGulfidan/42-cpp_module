#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Alice", 1);
	Bureaucrat b("Bella", 150);
	Bureaucrat c("Chris", 75);

	std::cout << a;
	std::cout << b;
	std::cout << c;

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		a.incrementGrade();
		std::cout << "After incrementing grade: " << a.getName() << " has grade " << a.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		b.incrementGrade();
		std::cout << "After incrementing grade: " << b.getName() << " has grade " << b.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		c.incrementGrade();
		std::cout << "After incrementing grade: " << c.getName() << " has grade " << c.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		a.decrementGrade();
		std::cout << "After decrementing grade: " << a.getName() << " has grade " << a.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		b.decrementGrade();
		std::cout << "After decrementing grade: " << b.getName() << " has grade " << b.getGrade() << std::endl;
		b.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		c.decrementGrade();
		std::cout << "After decrementing grade: " << c.getName() << " has grade " << c.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
        Bureaucrat d("David", 151); // grade > 150 → GradeTooLowException
    }
	catch (std::exception& e)
	{
        std::cerr << "Exception caught while creating " << e.what() << std::endl;
    }

	try
	{
        Bureaucrat d("David", 0); // grade > 150 → GradeTooLowException
    }
	catch (std::exception& e)
	{
        std::cerr << "Exception caught while creating " << e.what() << std::endl;
    }

	return 0;
}
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	try
	{
		PmergeMe sorter;
		sorter.parseInput(ac, av);
		sorter.run();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}


	
	return 0;
}
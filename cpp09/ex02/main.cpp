#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac <= 2)
	{
		std::cerr << "Error: missing argument." << std::endl;
		return 1;
	}
	
	int j = 0;
	double nbr[3000];
	for(int i = 1; i < ac; i++)
	{
		char* end = NULL;
		nbr[j] = strtod(av[i], &end);
		if (end[0] != '\0' || nbr[j] < 0 || nbr[j] > std::numeric_limits<int>::max())
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
		j++;
	}
	return 0;
}
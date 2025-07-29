#include "PmergeMe.hpp"
#include <sstream>
#include <iomanip>
#include <cstdlib>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy)
{
	if(this != &copy)
		*this = copy;
	return *this;
}



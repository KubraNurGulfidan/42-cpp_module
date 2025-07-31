#include "PmergeMe.hpp"
#include <sstream>
#include <iomanip>

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

void PmergeMe::_sortVector()
{
    _vecStart = std::clock();

    if (_vec.size() <= 1) {
        _vecEnd = std::clock();
        return;
    }

    std::vector<std::pair<int, int> > pairs;
    std::vector<int> minList;
    std::vector<int> maxList;

    size_t i = 0;
    for (; i + 1 < _vec.size(); i += 2)
	{
        int a = _vec[i];
        int b = _vec[i + 1];
        if (a < b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
    }

    int leftover = -1;
    if (_vec.size() % 2 != 0)
        leftover = _vec.back();

    for (size_t j = 0; j < pairs.size(); ++j)
        maxList.push_back(pairs[j].second);

    std::sort(maxList.begin(), maxList.end());

    for (size_t j = 0; j < pairs.size(); ++j)
        minList.push_back(pairs[j].first);

    for (size_t j = 0; j < minList.size(); ++j) {
        std::vector<int>::iterator pos =
            std::lower_bound(maxList.begin(), maxList.end(), minList[j]);
        maxList.insert(pos, minList[j]);
    }

    if (leftover != -1) {
        std::vector<int>::iterator pos =
            std::lower_bound(maxList.begin(), maxList.end(), leftover);
        maxList.insert(pos, leftover);
    }

    _vec = maxList;

    _vecEnd = std::clock();
}


void PmergeMe::_sortDeque()
{
    _deqStart = std::clock();

    if (_deq.size() <= 1) {
        _deqEnd = std::clock();
        return;
    }

    std::deque<std::pair<int, int> > pairs;
    std::deque<int> minList;
    std::deque<int> maxList;

    size_t i = 0;
    for (; i + 1 < _deq.size(); i += 2)
	{
        int a = _deq[i];
        int b = _deq[i + 1];
        if (a < b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
    }

    int leftover = -1;
    if (_deq.size() % 2 != 0)
        leftover = _deq.back();

    for (size_t j = 0; j < pairs.size(); ++j)
        maxList.push_back(pairs[j].second);

    std::sort(maxList.begin(), maxList.end());

    for (size_t j = 0; j < pairs.size(); ++j)
        minList.push_back(pairs[j].first);

    for (size_t j = 0; j < minList.size(); ++j)
	{
        std::deque<int>::iterator pos =
            std::lower_bound(maxList.begin(), maxList.end(), minList[j]);
        maxList.insert(pos, minList[j]);
    }

    if (leftover != -1)
	{
        std::deque<int>::iterator pos =
            std::lower_bound(maxList.begin(), maxList.end(), leftover);
        maxList.insert(pos, leftover);
    }

    _deq = maxList;

    _deqEnd = std::clock();
}


void PmergeMe::_printBefore(int ac, char** av)
{
	std::cout << "Before:	";
	
	if (ac > 6)
	{
		for (int i = 1; i < 5; i++)
			std::cout << av[i] << " ";
		std::cout << "[...]";
	}
	else
	{	
		for (int i = 1; i < ac; i++)
			std::cout << av[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::_printAfter()
{
	std::cout << "After:	";

	if (_vec.size() > 6)
	{
		for (int i = 0; i < 4; i++)
			std::cout << _vec[i] << " ";
		std::cout << "[...]";
	}
	else
	{	
		// for (size_t i = 0; i < _vec.size(); i++)
		// 	std::cout << _vec[i] << " ";
		for (size_t i = 0; i < _deq.size(); i++)
			std::cout << _deq[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::_printTiming()
{
    double vecTime = static_cast<double>(_vecEnd - _vecStart) / CLOCKS_PER_SEC * 1000;
    double deqTime = static_cast<double>(_deqEnd - _deqStart) / CLOCKS_PER_SEC * 1000;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector : " << vecTime << " ms" << std::endl;
    std::cout << "Time to process a range of " << _deq.size()
              << " elements with std::deque  : " << deqTime << " ms" << std::endl;
}

void PmergeMe::parseInput(int ac, char** av)
{
	int j = 0;
	double nbr[3000];
	for(int i = 1; i < ac; i++)
	{
		char* end = NULL;
		nbr[j] = strtod(av[i], &end);
		if (end[0] != '\0' || nbr[j] < 0 || nbr[j] > std::numeric_limits<int>::max())
			throw std::runtime_error("Error");
		j++;
	}
	for (int i = 0; i < (ac - 1); i++)
	{
		_vec.push_back(static_cast<int>(nbr[i]));
		_deq.push_back(static_cast<int>(nbr[i]));
		
	}
	this->_printBefore(ac, av);
}

void PmergeMe::run()
{
	this->_sortVector();
	this->_sortDeque();
	this->_printAfter();
	this->_printTiming();
}



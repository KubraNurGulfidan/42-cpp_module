#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <algorithm>
# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <limits>
# include <ctime>

class PmergeMe
{
private:
    std::vector<int> _vec;
    std::deque<int> _deq;

	
	std::clock_t _vecStart, _vecEnd;
    std::clock_t _deqStart, _deqEnd;
	
    void _sortVector();
    void _sortDeque();
	void _printBefore(int ac, char** av);
    void _printAfter();
    void _printTiming();
	
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& copy);
	PmergeMe& operator=(const PmergeMe& copy);
	
	void parseInput(int ac, char** av);
	void run();

};


#endif
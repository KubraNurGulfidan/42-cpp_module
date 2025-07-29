#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <limits>
# include <vector>
# include <deque>

class PmergeMe
{
private:
    std::vector<int> vec_container;
    std::deque<int> deque_container;

	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& copy);
	PmergeMe& operator=(const PmergeMe& copy);

public:

	void mergeInsertSort(std::vector<int>& vec);
	void mergeInsertSort(std::deque<int>& deq);

};


#endif
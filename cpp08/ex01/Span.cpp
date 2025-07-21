/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:41:16 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/21 17:08:47 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int n) : _capacity(n) {}

Span::Span(const Span& copy) {	*this = copy;	}

Span& Span::operator=(const Span& copy)
{
	if(this != &copy)
		*this = copy;
	return *this;
}

void Span::addNumber(int nbr)
{
    if (_numbers.size() >= _capacity)
        throw std::runtime_error("Span is already full");
    _numbers.push_back(nbr);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("No span can be found.");
		
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++)
	{
		int span = sorted[i + 1] - sorted[i];
		if(span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("No span can be found.");
		
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}
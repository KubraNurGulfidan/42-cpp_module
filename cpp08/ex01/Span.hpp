/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:12:27 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/22 12:48:20 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm> 
# include <stdexcept> 
# include <iostream>
# include <vector>

class Span
{
private:
    unsigned int _capacity;
    std::vector<int> _numbers; 
public:
	Span();
	~Span();
	Span(unsigned int n);
    Span(const Span& copy);
    Span& operator=(const Span& copy);

	void addNumber(int nbr);
	int shortestSpan() const;
	int longestSpan() const;

	template<typename Iterator>
    void addNumbers(Iterator begin, Iterator end)
	{
        if (std::distance(begin, end) + _numbers.size() > _capacity)
            throw std::runtime_error("Not enough space in Span");
        _numbers.insert(_numbers.end(), begin, end);
    }

};

#endif

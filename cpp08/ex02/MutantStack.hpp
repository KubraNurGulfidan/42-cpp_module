/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:12:27 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/22 12:38:34 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque> 
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack& copy);
	MutantStack& operator=(const MutantStack& copy);

	typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;
};

#include "MutantStack.tpp"

#endif

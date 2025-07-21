/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 04:59:30 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/20 17:31:47 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>

class Array
{
private:
	T *arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	Array &operator=(Array const &other);
	~Array();

	T &operator[](unsigned int idx);
	const T &operator[](unsigned int idx) const;
	unsigned int size() const;

	class OutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#include "Array.tpp"

#endif
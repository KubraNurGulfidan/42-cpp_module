/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 04:59:10 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/20 17:45:25 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &other) : arr(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; i++)
		this->arr[i] = other.arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if(this == &other)
		return *this;
	delete[] arr;
	arr = new T[other._size];
	this->_size = other._size;
	for (unsigned int i = 0; i < this->_size; i++)
		arr[i] = other.arr[i];
	return *this;
}

template <typename T>
Array<T>::~Array() {delete[] arr;}

template <typename T>
T &Array<T>::operator[](unsigned int idx)
{
	if(idx >= this->_size)
		throw OutOfBounds();
	return arr[idx];
}

template <typename T>
const T &Array<T>::operator[](unsigned int idx) const
{
	if(idx >= this->_size)
		throw OutOfBounds();
	return arr[idx];
}

template <typename T>
unsigned int Array<T>::size() const {return this->_size;}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return ("Accessing out-of-bounds index!");
}
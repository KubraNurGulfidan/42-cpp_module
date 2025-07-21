/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:15:11 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/20 19:17:28 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void print(const T& element)
{
    std::cout << element << " ";
}

template <typename T>
void increment(T& element)
{
    element += 1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	iter(arr, sizeof(arr) / sizeof(arr[0]), print<int>);
	std::cout << std::endl;
	iter(arr, sizeof(arr) / sizeof(arr[0]), increment<int>);
	iter(arr, sizeof(arr) / sizeof(arr[0]), print<int>);
	std::cout << std::endl;
}
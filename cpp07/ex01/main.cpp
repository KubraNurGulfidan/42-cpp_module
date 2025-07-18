/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:15:11 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/17 04:39:30 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int arr[] = {1,2,3,4,5,6};
	iter(arr, sizeof(arr) / sizeof(arr[0]), print<int>);
	std::cout << std::endl;
	iter(arr, sizeof(arr) / sizeof(arr[0]), increment<int>);
	iter(arr, sizeof(arr) / sizeof(arr[0]), print<int>);
	std::cout << std::endl;
}
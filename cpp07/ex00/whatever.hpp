/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 02:24:54 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/17 02:43:46 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
const T& max(T& a, T& b)
{
    if(a > b)
		return a;
	else
		return b;
}

template <typename T>
const T& min(T& a, T& b)
{
    if(a < b)
		return a;
	else
		return b;
}

#endif
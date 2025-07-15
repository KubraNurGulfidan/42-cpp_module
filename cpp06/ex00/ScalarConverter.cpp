/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:20 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/15 17:34:21 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cctype>
#include <cstdlib>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(char c) {	(void)c;	}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {    (void)other;	}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}


void ScalarConverter::convert(const std::string& input)
{
	const char* end = NULL;
	bool negative = false;
	size_t i = 0;
	double value = 0.0;
	double fraction = 0.1;

	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (input == "+inf" || input == "+inff"
		|| input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << (input.length() == 4 ? "f" : "") << std::endl;
		std::cout << "double: "  << (input.length() == 4 ? input : input.substr(0,input.size() - 1)) << std::endl;
		return;
	}
	
	if(input[i] == '-')
	{
		negative = true;
		i++;
	}
	else if(input[i] == '+')
		i++;
	
	while (i < input.length() && std::isdigit(input[i]))
	{
		value = value * 10 + (input[i] - '0');
		i++;
	}

	if(i < input.length() && input[i] == '.')
	{
		i++;
		while (i < input.length() && std::isdigit(input[i]))
		{
			value += fraction * (input[i] - '0');
			fraction *= 0.1;
			i++;
		}
	}

	end = input.c_str() + i;

	if(negative == true)
		value *= (-1);	
	
	if (input.length() == 1 && !isdigit(input[0]))
 	{
		char c = input[0];
		std::cout << "char:  '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "f" << std::endl;
		std::cout << "double: "  <<  static_cast<double>(c) << std::endl;
		return;
	}

	if (end == input.c_str() || (*end != '\0' && *end != 'f') || (end[0] == 'f' && end[1] != '\0'))
	{
		std::cerr << "Invalid input: " << input << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}

	
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(value)))
		std::cout << "char: Non displayable" << std::endl;
    else
    {
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}

	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << "f" << std::endl;
	std::cout << "double: "  <<  static_cast<double>(value) << std::endl;
}

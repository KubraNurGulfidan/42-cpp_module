#include "RPN.hpp"
#include <sstream>
#include <iomanip>
#include <cstdlib>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN& RPN::operator=(const RPN& copy)
{
	if(this != &copy)
		*this = copy;
	return *this;
}

int RPN::evaluate(const std::string& expression)
{
	std::stack<int> stack;
	std::istringstream iss(expression);
	std::string token;
	while (iss >> token)
	{
		if (token.length() == 1 && std::isdigit(token[0]))
			stack.push(token[0] - '0');
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (stack.size() < 2)
				throw std::runtime_error("Error");

			int nbr1 = stack.top();
			stack.pop();
			int nbr2 = stack.top();
			stack.pop();

			int result = 0;

			if(token == "+")
				result = nbr1 + nbr2;
			else if(token == "-")
				result = nbr2 - nbr1;
			else if(token == "*")
				result = nbr2 * nbr1;
			else if(token == "/")
			{
				if (nbr2 == 0)
					throw std::runtime_error("Error");
				result = nbr2 / nbr1;
			}
			stack.push(result);
		}
		else
            throw std::runtime_error("Error");
	}
	return stack.top();
}

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>


class RPN
{
public:
	RPN();
	~RPN();
    RPN(const RPN& copy);
    RPN& operator=(const RPN& copy);

	static int evaluate(const std::string& expression);

};


#endif
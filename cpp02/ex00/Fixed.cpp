#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->fixedPoint = fixed.fixedPoint;
	std::cout << "Copy constructor called" << std::endl;	
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->fixedPoint = fixed.fixedPoint;
	return *this;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

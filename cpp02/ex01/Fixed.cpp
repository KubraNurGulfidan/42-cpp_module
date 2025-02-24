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

Fixed::Fixed(const int fixed)
{
    this->fixedPoint = fixed << this->nbrOfFractionalBits;
    std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float fixed)
{
    this->fixedPoint = roundf(fixed * (1 << this->nbrOfFractionalBits));
    std::cout << "Float constructor called." << std::endl;
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

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixedPoint) / (1 << this->nbrOfFractionalBits);
}

int Fixed::toInt(void) const
{
    return this->fixedPoint >> this->nbrOfFractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
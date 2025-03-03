#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
}
Fixed::~Fixed()
{
}
Fixed::Fixed(const int fixed)
{
    this->fixedPoint = fixed << this->nbrOfFractionalBits;
}
Fixed::Fixed(const float fixed)
{
    this->fixedPoint = roundf(fixed * (1 << this->nbrOfFractionalBits));
}
Fixed::Fixed(const Fixed &fixed)
{
	this->fixedPoint = fixed.fixedPoint;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
		this->fixedPoint = fixed.fixedPoint;
	return *this;
}

bool Fixed::operator > (const Fixed &fixed)
{
	if (this->fixedPoint > fixed.fixedPoint)
		return (true);
	return (false);
}
bool Fixed::operator < (const Fixed &fixed)
{
	if (this->fixedPoint < fixed.fixedPoint)
		return (true);
	return (false);
}
bool Fixed::operator >= (const Fixed &fixed)
{
	if (this->fixedPoint >= fixed.fixedPoint)
		return (true);
	return (false);
}
bool Fixed::operator <= (const Fixed &fixed)
{
	if (this->fixedPoint <= fixed.fixedPoint)
		return (true);
	return (false);
}
bool Fixed::operator == (const Fixed &fixed)
{
	if (this->fixedPoint == fixed.fixedPoint)
		return (true);
	return (false);
}
bool Fixed::operator != (const Fixed &fixed)
{
	if (this->fixedPoint == fixed.fixedPoint)
		return (true);
	return (false);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
	Fixed result;
	result.fixedPoint = this->fixedPoint + fixed.fixedPoint;
	return result;
}
Fixed Fixed::operator - (const Fixed &fixed)
{
	Fixed result;
	result.fixedPoint = this->fixedPoint - fixed.fixedPoint;
	return result;
}
Fixed Fixed::operator * (const Fixed &fixed)
{
	Fixed result;
	result.fixedPoint = this->fixedPoint * fixed.fixedPoint;
	return result;
}
Fixed Fixed::operator / (const Fixed &fixed)
{
	Fixed result;
	result.fixedPoint = this->fixedPoint / fixed.fixedPoint;
	return result;
}

Fixed Fixed::operator ++ (int)
{
	Fixed result = *this;
	this->fixedPoint++;
	return result;
}
Fixed &Fixed::operator ++ ()
{
	this->fixedPoint++;
	return *this;
}
Fixed Fixed::operator -- (int)
{
	Fixed result = *this;
	this->fixedPoint--;
	return result;
}
Fixed &Fixed::operator -- ()
{
	this->fixedPoint--;
	return *this;
}

Fixed &Fixed::max( Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}
Fixed &Fixed::min( Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}
const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.fixedPoint > fixed2.fixedPoint)
		return (fixed1);
	return (fixed2);
}
const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.fixedPoint < fixed2.fixedPoint)
		return (fixed1);
	return (fixed2);
}

int Fixed::getRawBits( void ) const{return this->fixedPoint;}
void Fixed::setRawBits( int const raw ){this->fixedPoint = raw;}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixedPoint) / (1 << this->nbrOfFractionalBits);
}

int Fixed::toInt(void) const
{
    return this->fixedPoint >> this->nbrOfFractionalBits;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPoint;
	const static int nbrOfFractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const int fixed);
	Fixed(const float fixed);
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
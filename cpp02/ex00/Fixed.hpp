#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	const static int nbrOfFractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
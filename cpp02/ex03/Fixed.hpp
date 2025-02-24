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

	bool operator > (const Fixed &fixed);
	bool operator < (const Fixed &fixed);
	bool operator >= (const Fixed &fixed);
	bool operator <= (const Fixed &fixed);
	bool operator == (const Fixed &fixed);
	bool operator != (const Fixed &fixed);

	Fixed operator + (const Fixed &fixed);
	Fixed operator - (const Fixed &fixed);
	Fixed operator * (const Fixed &fixed);
	Fixed operator / (const Fixed &fixed);

	Fixed operator ++ (int);
	Fixed &operator ++ ();
	Fixed operator -- (int);
	Fixed &operator -- ();

	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
	static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);



	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);
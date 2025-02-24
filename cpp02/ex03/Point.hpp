#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	~Point();
	Point(const float nbr1, const float nbr2);
	Point(const Point &point);

	Point &operator = (const Point &point);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#include "Point.hpp"

static float areaOfTriangle(Point const a, Point const b, Point const c)
{
	float area;

	area = fabs((a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()) - (a.getY() * b.getX() + b.getY() * c.getX() + c.getY() * a.getX()));
	area /= 2;
	std::cout << area <<std::endl;

	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float totalArea = areaOfTriangle(a, b, c);
	float threeArea = areaOfTriangle(a, b, point) + areaOfTriangle(a, c, point) + areaOfTriangle(b, c, point);

	if (totalArea == threeArea)
		return true;
	return false;
}
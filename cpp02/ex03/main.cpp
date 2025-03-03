#include "Point.hpp"

int main( void )
{
	Point a(2.0, 2.0f);
	Point b(2.0f, 4.0f);
	Point c(4.0f, 2.0f);

	Point p(3.5f, 3.0f);
	if (bsp(a, b, c, p))
		std::cout << "True!" << std::endl;
	else
		std::cout << "False!" << std::endl;
	return 0;
}
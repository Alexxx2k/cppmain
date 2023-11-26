#include "Point.hpp"
#include <iostream>
#include <limits>
using namespace Func;
int main()
{
	double x = 1;
	double y = 1;
	double dist = 0;
	double min = std::numeric_limits<double>::max();
	Point point;
	while ((x != 0) || (y != 0))
	{
		std::cout << "Input x and y point:\n";
		if (std::cin >> x >> y) {
			point.setX(x);
			point.setY(y);
			std::cout << "Point:";
			point.getX();
			point.getY();
			if ((x != 0) || (y != 0)) {
				dist = point.nearestPoint(0);
			}
			if (dist < min) {
				min = dist;
			}
		}
		else 
		{
			std::cerr << "Wrong input\n";
			return 1;
		}
	}
	std::cout << "Min dist: " << min;
	return 0;
}
#include <iostream>
#include <limits>
#include "Point.hpp"

int main()
{
  Point closestPoint;
  double closestDistance = std::numeric_limits<double>::max();
  while (true)
  {
    Point point;
    std::cin >> point;

    if (point.getX() == 0.0 && point.getY() == 0.0)
    {
      break;
    }

    double distanceToOrigin = point.getDistance(Point(0.0, 0.0));
    if (distanceToOrigin < closestDistance)
    {
      closestDistance = distanceToOrigin;
      closestPoint = point;
    }
  }
  std::cout << closestPoint;
  return 0;
}
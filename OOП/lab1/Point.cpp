#include "Point.hpp"
#include <iostream>
#include <limits>
#include <cmath>

Func::Point::Point()
{
  double x_ = 0.0;
  double y_ = 0.0;
  double dist = 0.0;
  double min = 0;
}

Func::Point::~Point()
{

}

void Func::Point::setX(double x)
{
  x_ = x;
}
void Func::Point::setY(double y)
{
  y_ = y;
}

void Func::Point::getX()
{
  std::cout << "(" << x_ << ",";
}
void Func::Point::getY()
{
  std::cout << y_ << ")\n";
}

double Func::Point::nearestPoint(double dist)
{
  dist = sqrt((pow(x_, 2) + pow(y_, 2)));
  return dist;
}

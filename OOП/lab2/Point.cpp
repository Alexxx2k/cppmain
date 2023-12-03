#include <cmath>
#include <iostream>
#include "Point.hpp"

Point::Point() : x_(0.0), y_(0.0) {}

Point::Point(double x, double y) : x_(x), y_(y) {}

Point::Point(const Point &other) : x_(other.x_), y_(other.y_) {}

Point::~Point() {}

void Point::setX(double x)
{
  x_ = x;
}

void Point::setY(double y)
{
  y_ = y;
}

double Point::getX() const
{
  return x_;
}

double Point::getY() const
{
  return y_;
}

bool Point::isEqual(const Point &other) const
{
  return x_ == other.x_ && y_ == other.y_;
}

double Point::getDistance(const Point &other) const
{
  double deltaX = x_ - other.x_;
  double deltaY = y_ - other.y_;
  return sqrt(deltaX * deltaX + deltaY * deltaY);
}

void Point::move(double k)
{
  x_ += k;
  y_ += k;
}

void Point::operator=(const Point &other)
{
  if (this != &other)
  {
    x_ = other.x_;
    y_ = other.y_;
  }
}

bool Point::operator==(const Point &other) const
{
  return (getX() == other.getX()) && (getY() == other.getY());
}

bool Point::operator<(const Point &other) const
{
  return (getX() * getX() + getY() * getY()) < (other.getX() * other.getX() + other.getY() * other.getY());
}

bool Point::operator>=(const Point &other) const
{
  return (getX() * getX() + getY() * getY()) >= (other.getX() * other.getX() + other.getY() * other.getY());
}

// TODO: Point::operator+
Point Point::operator+(double k) const
{
  return Point(x_ + k, y_ + k);
}

// TODO: Point::operator+=
Point &Point::operator+=(double k)
{
  x_ += k;
  y_ += k;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Point &point)
{
  os << "(" << point.getX() << "; " << point.getY() << ")\n";
  return os;
}

std::istream &operator>>(std::istream &is, Point &point)
{
  double x = 0;
  double y = 0;
  is >> x >> y;
  point.setX(x);
  point.setY(y);
  return is;
}

bool isPointInCircle(const Point &point, double radius)
{
  return point.getDistance(Point(0.0, 0.0)) <= radius;
}

void input(Point &point)
{
  double x, y;
  std::cin >> x >> y;
  point.setX(x);
  point.setY(y);
}

void output(const Point &point)
{
  std::cout << "(" << point.getX() << ", " << point.getY() << ")";
}
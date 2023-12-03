#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point
{
public:
  Point();
  Point(double x, double y);
  Point(const Point &other);
  ~Point();

  void operator=(const Point &other);
  bool operator==(const Point &other) const;
  bool operator<(const Point &other) const;
  bool operator>=(const Point &other) const;
  Point operator+(double k) const;
  Point &operator+=(double k);

  void setX(double x);
  void setY(double y);
  double getX() const;
  double getY() const;

  bool isEqual(const Point &other) const;
  double getDistance(const Point &other) const;
  void move(double k);

private:
  double x_;
  double y_;
};

bool isPointInCircle(const Point &point, double radius);
void input(Point &point);
void output(const Point &point);

std::ostream &operator<<(std::ostream &os, const Point &point);
std::istream &operator>>(std::istream &is, Point &point);
#endif
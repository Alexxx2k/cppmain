#ifndef Point_HPP
#define Point_HPP
#include <iosfwd>
namespace Func {
	class Point
	{
	public:
		Point();
		~Point();
		void setX(double x);
		void setY(double x);
		void getX();
		void getY();
		double nearestPoint(double d);
	private:
		double x_;
		double y_;
		double dist;
		double min;
	};
}
#endif

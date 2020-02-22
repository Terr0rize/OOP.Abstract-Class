#include "pch.h"
#include "Body.h"
#include <iostream>
#include "Ball.h"
Ball::Ball(double x, double y, double z)
	: r(x)
	
{
}

double Ball::SurfaceArea() const
{
	return 3,14*r*r;
}
double Ball::Volume() const
{
	return 3,14*1,3*r*r;
}

std::ostream& Ball::Print(std::ostream& out) const
{
	return out << "Ball: r=" << r;
}

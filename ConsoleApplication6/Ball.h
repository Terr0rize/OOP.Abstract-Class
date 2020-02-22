#include "Body.h"
#pragma once
class Ball
	: public Body
{
public:
	Ball(double x, double y, double z);
	virtual double SurfaceArea() const override;
	virtual double Volume() const override;
	virtual std::ostream &Print(std::ostream &out) const;

public:
	double r;
};
#pragma once
#include "Unit.h"
class UnitDouble : public Unit<double>
{
public:
	UnitDouble(double value) : Unit(value) {}
	friend std::ostream& operator << (std::ostream& os, const UnitDouble& unit);
	std::string toString();
};


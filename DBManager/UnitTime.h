#pragma once
#include "Unit.h"
class UnitTime : public Unit<std::tm>
{
public:
	UnitTime(tm value) : Unit(value) {}
	friend std::ostream& operator << (std::ostream& os, const UnitTime& unit);
	std::string toString();
};


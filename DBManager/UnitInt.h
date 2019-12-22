#pragma once
#include "Unit.h"
class UnitInt : public Unit<int>
{
public:
	UnitInt(int value) : Unit(value){}
	friend std::ostream& operator << (std::ostream& os, const UnitInt& unit);
	std::string toString();
};


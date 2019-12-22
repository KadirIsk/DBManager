#pragma once
#include "Unit.h"
class UnitString : public Unit<std::string>
{
public:
	UnitString(std::string value) : Unit(value) {}
	friend std::ostream& operator << (std::ostream& os, const UnitString& unit);
	std::string toString();
};


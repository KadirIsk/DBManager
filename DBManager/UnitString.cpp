#include "UnitString.h"

std::ostream& operator<<(std::ostream& os, const UnitString& unit)
{
	os << unit.getValue() << std::endl;

	return os;
}

std::string UnitString::toString()
{
	return getValue();
}

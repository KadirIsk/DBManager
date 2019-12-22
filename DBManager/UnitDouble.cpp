#include "UnitDouble.h"
#include <sstream>

std::ostream& operator<<(std::ostream& os, const UnitDouble& unit)
{
	os << unit.getValue() << std::endl;

	return os;
}

std::string UnitDouble::toString()
{
	std::ostringstream strs;
	strs << getValue();
	return strs.str();
}

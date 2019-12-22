#include "UnitInt.h"
#include <sstream>

std::ostream& operator << (std::ostream& os, const UnitInt& unit) {
	os << unit.getValue() << std::endl;

	return os;
}

std::string UnitInt::toString()
{
	return std::to_string(getValue());
}

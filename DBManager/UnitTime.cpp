#include "UnitTime.h"

std::ostream& operator<<(std::ostream& os, const UnitTime& unit)
{
	char buff[50];
	strftime(buff, sizeof(buff), "%d %m %Y %H:%M:%S", &unit.getValue());
	os << buff << std::endl;

	return os;
}

std::string UnitTime::toString()
{
	char buff[50];
	strftime(buff, sizeof(buff), "%d %m %Y %H:%M:%S", &getValue());
	return std::string(buff);
}

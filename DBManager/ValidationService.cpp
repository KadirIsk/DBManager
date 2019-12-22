#include "ValidationService.h"

using namespace std;

bool ValidationService::isEmptyTime(BaseUnit* bUnit) {
	tm tm = {};
	tm = static_cast<Unit<std::tm>*>(bUnit)->getValue();
	if (tm.tm_hour == 0 && tm.tm_isdst == 0 && tm.tm_mday == 0 &&
		tm.tm_min == 0 && tm.tm_mon == 0 && tm.tm_sec == 0 &&
		tm.tm_wday == 0 && tm.tm_yday == 0 && tm.tm_year == 0)
		return true;
	return false;
}

bool ValidationService::isEmptyText(BaseUnit* bUnit) {
	string text = static_cast<Unit<string>*>(bUnit)->getValue();
	return text.empty();
}

bool ValidationService::isEmpty(std::string* string)
{
	return string->empty();
}

bool ValidationService::isNull(std::string* text)
{
	return text == NULL ? true : false;
}

bool ValidationService::isNull(std::fstream* file)
{
	if (file == NULL)	return true;
	return false;
}

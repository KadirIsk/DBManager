#include <ctime>
#include "ConvertionService.h"
#include "ValidationService.h"

std::string ConvertionService::convert(const Unit<std::tm>& unit) {

	return std::string("aa");
}

std::string ConvertionService::convert(const Unit<int>& unit) {

	return std::to_string(unit.getValue());
}

std::string ConvertionService::convert(const Unit<double>& unit) {

	return std::to_string(unit.getValue());
}

const char* ConvertionService::convert(std::string* text)
{
	if (ValidationService::isNull(text) || ValidationService::isEmpty(text)) {
		return nullptr;
	}
	return (*text).c_str();
}

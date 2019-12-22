#include "Property.h"
#include "ValidationService.h"

bool Property::operator==(const std::string* propertyName)
{
	if (ValidationService::isNull(this->getName()) && ValidationService::isNull(new std::string(*propertyName))) return true;
	if (ValidationService::isNull(this->getName())) return false;
	if (ValidationService::isNull(new std::string(*propertyName))) return false;
	if (ValidationService::isEmpty(this->getName()) && ValidationService::isEmpty(new std::string(*propertyName))) return true;
	if (!ValidationService::isEmpty(this->getName()) && !ValidationService::isEmpty(new std::string(*propertyName))) {
		return this->getName()->compare(*propertyName) == 0 ? true : false;
	}
	return false;
}

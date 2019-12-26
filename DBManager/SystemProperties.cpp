#include "SystemProperties.h"
#include "PropertyService.h"
#include "ValidationService.h"

std::string* SystemProperties::db_dir = new std::string("");

void SystemProperties::setSystemProperties(std::list<Property*> properties)
{
	std::string* propName = new std::string("db_dir");
	auto property = PropertyService::findProperty(properties, propName);
	if (!ValidationService::isNull(property)) {
		db_dir = new std::string(*property->getValue());
	}
}

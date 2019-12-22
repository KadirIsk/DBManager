#include "PropertyService.h"
#include "Utility.h"

Property* PropertyService::parse(std::string* str, std::string* delimiter)
{
	auto list = Utility::split(str, delimiter);
	if (list.size() == 2) {
		auto property = new Property();
		auto it = list.begin();
		property->setName(*it);
		property->setValue(*std::next(it));
		return property;
	}
	return nullptr;
}

std::list<Property*> PropertyService::parse(std::list<std::string*> str, std::string* delimiter)
{
	std::list<Property*> properties;
	for (auto it = str.begin(); it != str.end(); it++) {
		properties.push_back(parse(*it, delimiter));
	}
	return properties;
}

Property* PropertyService::findProperty(std::list<Property*> properties, std::string* propertyName)
{
	for (auto it = properties.begin(); it != properties.end(); it++) {
		if (**it == propertyName)
			return *it;
	}
	return nullptr;
}



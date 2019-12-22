#include "PropertyService.h"

Property* PropertyService::parse(std::string* text, std::string* delimiter)
{
	return new Property();
}

std::list<Property*> PropertyService::parse(std::list<std::string*> texts, std::string* delimiter)
{
	std::list<Property*> properties;
	for (std::list<std::string*>::iterator it = texts.begin(); it != texts.end(); it++) {
		properties.push_back(parse(*it, delimiter));
	}
	return properties;
}

Property* PropertyService::findProperty(std::list<Property*> properties, std::string* propertyName)
{
	for (std::list<Property*>::iterator it = properties.begin(); it != properties.end(); it++) {
		if (**it == propertyName)
			return *it;
	}
	return nullptr;
}



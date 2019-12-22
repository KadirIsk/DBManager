#pragma once
#include <list>
#include "Property.h"
class PropertyService
{
public:
	static Property* parse(std::string*, std::string*);
	static std::list<Property*> parse(std::list<std::string*>, std::string*);
	static Property* findProperty(std::list<Property*>, std::string*);
};


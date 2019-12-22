#pragma once
#include <string>
class Property
{
	std::string* name;
	std::string* value;
public:
	void setName(std::string* name) { this->name = name; }
	void setValue(std::string* value) { this->value = value; }
	std::string* getName() { return this->name; }
	std::string* getValue() { return this->value; }

	bool operator ==(const std::string*);
};


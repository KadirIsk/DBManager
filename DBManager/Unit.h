#pragma once
#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <iomanip>
#include <ctime>
#include "BaseUnit.h"
template<class T>
class Unit : public BaseUnit
{
private:
	T value;
public:
	Unit(const T unitValue) : value(unitValue){}
	void setValue(T unitValue) { this->value = unitValue; }
	T getValue() const { return this->value; }
	virtual std::string toString() = 0;
	//friend ostream& operator << (ostream& os, const Unit& unit);
	//friend ostream& operator << (ostream& os, const Unit& unit);
	//friend ostream& operator << (ostream& os, const Unit& unit);
	//friend ostream& operator << (ostream& os, const Unit& unit);

	//template <typename T>
	//string toString() {
	//	T value = this->getValue();
	//	switch (typeof(T))
	//	{
	//	case int:
	//		return "INT";
	//		break;
	//	case std::string:
	//		return "STRING"
	//		break;
	//	default:
	//		break;
	//	}

	//	//if (dynamic_cast<int*>(&value)) {
	//	//	std::ostringstream strs;
	//	//	strs << value;
	//	//	return strs.str();
	//	//}
	//	//else if (dynamic_cast<double*>(&value)) {
	//	//	return to_string(value);
	//	//}
	//	//else if (dynamic_cast<string*>(&value)) {
	//	//	return value;
	//	//}
	//	//else if (dynamic_cast<std::tm*>(&value)) {
	//	//	char buff[50];
	//	//	strftime(buff, sizeof(buff), "%d %m %Y %H:%M:%S", &value);
	//	//	return buff;
	//	//}
	//	//else {
	//	//	return "";
	//	//}
	//}
};
#endif

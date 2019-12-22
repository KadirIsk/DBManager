#pragma once
#include <ctime>
#include "Unit.h"
class ValidationService
{
public:
	static bool isEmptyTime(BaseUnit*);
	static bool isEmptyText(BaseUnit*);
	static bool isEmpty(std::string*);
	static bool isNull(std::string*);
	static bool isNull(std::fstream*);
};


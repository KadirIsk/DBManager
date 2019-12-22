#pragma once
#include <string>
#include "Unit.h"

#ifndef CONVERTIONSERVICE_H
#define CONVERTIONSERVICE_H
class ConvertionService
{
private:
	
public:
	ConvertionService() = delete;
	static std::string convert(const Unit<std::tm>&);
	static std::string convert(const Unit<int>&);
	static std::string convert(const Unit<double>&);
	static const char* convert(std::string*);
};
#endif
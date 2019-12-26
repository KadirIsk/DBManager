#pragma once
#include <string>
#include <list>
#include "SystemProperties.h"
class Utility
{
public:
	static void setSystemProperties(SystemProperties*);
	static void trim(std::string*);
	static void ltrim(std::string*);
	static void rtrim(std::string*);
	static std::list<std::string*> split(std::string*, std::string*);
};
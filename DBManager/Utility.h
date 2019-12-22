#pragma once
#include <string>
#include <list>
class Utility
{
public:
	static void setAppDir(std::string*);
	static void trim(std::string*);
	static void ltrim(std::string*);
	static void rtrim(std::string*);
	static std::list<std::string*> split(std::string*, std::string*);
};


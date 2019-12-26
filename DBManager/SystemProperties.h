#pragma once
#include <list>
#include <string>
#include "Property.h"
class SystemProperties
{
	static std::string* db_dir;
public:
	static void setSystemProperties(std::list<Property*>);
	static void setDbDir(std::string* dbDir) { db_dir = dbDir; }
	static std::string* getDbDir() { return db_dir; }
};

#pragma once
#include <fstream>
class IWritable {
public:
	virtual void writeToDisk(std::fstream*) = 0;
};
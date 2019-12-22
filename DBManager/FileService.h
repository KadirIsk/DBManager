#pragma once
#include <list>
#include "IWritable.h"
class FileService
{
public:
	void writeToSystem(std::list<IWritable*>, std::string*);
	static std::fstream* openFileWritingMode(std::string*, std::ios_base::openmode);
	static std::fstream* openFileReadingMode(std::string*, std::ios_base::openmode);
	static void closeFile(std::fstream*);
	static bool isOpen(std::fstream*);
};


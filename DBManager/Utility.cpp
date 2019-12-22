#include <fstream>
#include <windows.h>
#include <list>
#include "Utility.h"
#include "ValidationService.h"
#include "FileService.h"
#include "PropertyService.h"

void Utility::setAppDir(std::string* dbDir)
{
	std::string propFileDir("C:/Users/kadir.isik/Desktop/Desktop/VS/DBManager/DBManager/dbmanager-properties.txt");
	std::string* fileName = new std::string(propFileDir);
	std::string* delimiter = new std::string("=");
	std::string* line = new std::string();
	std::list<std::string*> lines;
	std::list<Property*> properties;

	std::fstream* propertyFile;
	propertyFile = FileService::openFileReadingMode(fileName, std::ios_base::in);

	if (FileService::isOpen(propertyFile)) {
		while (std::getline(*propertyFile, *line)) {
			if (!ValidationService::isEmpty(line)) {
				lines.push_back(line);
			}
		}
		properties = PropertyService::parse(lines, delimiter);
	}

	FileService::closeFile(propertyFile);
}

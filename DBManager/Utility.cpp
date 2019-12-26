#include <fstream>
#include <windows.h>
#include <list>
#include "Utility.h"
#include "ValidationService.h"
#include "FileService.h"
#include "PropertyService.h"

void Utility::setSystemProperties(SystemProperties* systemProperties)
{
	std::string propFileDir("C:/Users/kadir.isik/Desktop/Desktop/VS/DBManager/DBManager/dbmanager-properties.txt");
	auto fileName = new std::string(propFileDir);
	auto delimiter = new std::string("=");
	auto line = new std::string();
	std::list<std::string*> lines;

	auto propertyFile = FileService::openFileReadingMode(fileName, std::ios_base::in);

	if (FileService::isOpen(propertyFile)) {
		while (std::getline(*propertyFile, *line)) {
			if (!ValidationService::isEmpty(line)) {
				lines.push_back(line);
			}
		}
		auto properties = PropertyService::parse(lines, delimiter);
		SystemProperties::setSystemProperties(properties);
	}

	FileService::closeFile(propertyFile);
}

void Utility::trim(std::string* str)
{
	rtrim(str);
	ltrim(str);
}

void Utility::ltrim(std::string* str)
{
	if (!ValidationService::isNull(str) && !ValidationService::isEmpty(str)) {
		int begin = 0;
		int curIndx = 0;
		for (auto it = str->begin(); it != str->end(); it++, curIndx++) {
			if (*it != ' ' && *it != '\t' && *it != '\n') {
				begin = curIndx;
				break;
			}
		}

		*str = str->substr(begin, str->length() - 1);
	}
}

void Utility::rtrim(std::string* str)
{
	if (!ValidationService::isNull(str) && !ValidationService::isEmpty(str)) {
		int end = 0;
		int curIndx = str->length();
		for (auto rit = str->rbegin(); rit != str->rend(); rit++, curIndx--) {
			if (*rit != ' ' && *rit != '\t' && *rit != '\n') {
				end = curIndx;
				break;
			}
		}

		*str = str->substr(0, end);
	}
}

std::list<std::string*> Utility::split(std::string* str, std::string* delimiter)
{
	if (ValidationService::isNull(str) || 
		ValidationService::isEmpty(str) ||
		ValidationService::isNull(delimiter) || 
		ValidationService::isEmpty(delimiter)) {
		return std::list<std::string*>();
	}
	size_t pos = 0;
	std::string* token;
	std::list<std::string*> list;
	auto copy = *str;
	while ((pos = copy.find(*delimiter)) != std::string::npos) {
		token = new std::string(copy.substr(0, pos));
		copy.erase(0, pos + 1);
		list.push_back(token);
	}
	
	if (copy.length() > 0) {
		list.push_back(new std::string(copy));
	}

	return list;
}



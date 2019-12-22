#include "FileService.h"
#include "ValidationService.h"
#include "ConvertionService.h"

void FileService::writeToSystem(std::list<IWritable*> writableObjects, std::string* fileName)
{

}

std::fstream* FileService::openFileWritingMode(std::string* fileName, std::ios_base::openmode openMode)
{
	if (ValidationService::isNull(fileName) || ValidationService::isEmpty(fileName)) {
		return nullptr;
	}
	std::fstream* file = new std::fstream();
	(*file).open(ConvertionService::convert(fileName), openMode);
	return file;
}

std::fstream* FileService::openFileReadingMode(std::string* fileName, std::ios_base::openmode openMode)
{
	if (ValidationService::isNull(fileName) || ValidationService::isEmpty(fileName)) {
		return nullptr;
	}
	std::fstream* file = new std::fstream();
	(*file).open(ConvertionService::convert(fileName), openMode);
	return file;
}

void FileService::closeFile(std::fstream* file)
{
	if (!ValidationService::isNull(file)) {
		if (file->is_open()) {
			file->close();
		}
	}
}

bool FileService::isOpen(std::fstream* file)
{
	if (!ValidationService::isNull(file)) {
		return file->is_open();
	}
	return false;
}

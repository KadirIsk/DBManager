#pragma once
#include <string>
class FileLine
{
	std::string* content;
public:
	void setContent(std::string* content) { this->content = content; }
	std::string* getContent() { return this->content; }
};


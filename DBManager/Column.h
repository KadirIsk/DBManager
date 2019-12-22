#pragma once
#include <string>
#include "BaseUnit.h"
using namespace std;
class Column
{
private:
	string columnValue;
	string columnType;
	BaseUnit* columnContent;
public:
	string getColumnValue() { return columnValue; }
	string getColumnType() { return columnType; }
	BaseUnit* getColumnContent() { return columnContent; }
	void setColumnValue(string columnValue) { this->columnValue = columnValue; }
	void setColumnType(string columnType) { this->columnType = columnType; }
	void setColumnContent(BaseUnit* columnContent) { this->columnContent = columnContent; }
	

	bool operator >= (Column const&);
};


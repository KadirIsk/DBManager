#pragma once
#include "Row.h"
#include <deque>
#include "IWritable.h"

class Table : public IWritable
{
private:
	deque<Row> rows;
public:
	deque<Row> getRows() { return rows; }
	void setRows(deque<Row> rows) { this->rows = rows; }
	void writeToDisk(fstream*);
};


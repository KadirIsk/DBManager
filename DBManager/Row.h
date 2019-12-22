#pragma once
#include <deque>
#include "Column.h"
using namespace std;
class Row
{
private:
	int sortColumn;
	deque<Column> columns;
public:
	bool operator >= (Row const&);
};


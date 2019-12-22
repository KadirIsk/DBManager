#include <iostream>
#include <thread>
#include <iomanip>
#include <sstream>
#include <list>
#include <windows.h>
#include "Unit.h"
#include "UnitInt.h"
#include "UnitDouble.h"
#include "UnitString.h"
#include "UnitTime.h"
#include "ValidationService.h"
#include "Table.h"
#include "Utility.h"

using namespace std;

int main()
{

	tm tm = {};
	stringstream ss("6 9 2014 12:35:34");
	ss >> get_time(&tm, "%d %m %Y %H:%M:%S");
	auto tp = chrono::system_clock::from_time_t(std::mktime(&tm));
	time_t time = mktime(&tm);
	//cout << time << endl;
	//cout << tm.tm_hour << endl
	//	<< tm.tm_isdst << endl
	//	<< tm.tm_mday << endl
	//	<< tm.tm_min << endl
	//	<< tm.tm_mon + 1 << endl
	//	<< tm.tm_sec << endl
	//	<< tm.tm_wday << endl
	//	<< tm.tm_yday << endl
	//	<< tm.tm_year + 1900 << endl;

	//BaseUnit* base = new Unit<int>(11);
	//Unit<int> u(11);
	//char buff[50];
	//strftime(buff, sizeof(buff), "%d %m %Y %H:%M:%S", &tm);
	//cout << buff << endl;
	//tm = {};

	/*if (dynamic_cast<std::tm*>(&tm)) {
		cout << "Yuuppppii" << endl;
	}*/

	if (tm.tm_hour == 0) {
		cout << "Empty" << endl;
	}
	//Unit<std::tm> u1(tm);


	//Unit<int> unit(22);
	//if (!ValidationService::isEmptyTime(&u1)) {
		//cout << "Time: " << u1;
	//}
	//cout << "Integer number : " << unit;

	//Unit<double> uD(22.2);
	////cout << "Double number : " << uD;

	//Unit<string> unit1("Uregil Mah. 1175. Sok");
	//cout << "String : " << unit1;

	Table* table = new Table();

	UnitInt integerUnit(14);
	UnitString stringUnit("String");
	UnitDouble doubleUnit(15.1);
	UnitTime timeUnit(tm);

	cout << "UnitInt : " << integerUnit;
	cout << "UnitDouble : " << doubleUnit;
	cout << "UnitString : " << stringUnit;
	cout << "UnitTime : " << timeUnit;


	list<BaseUnit*> unitList;
	unitList.push_back(&integerUnit);
	unitList.push_back(&doubleUnit);
	unitList.push_back(&stringUnit);
	unitList.push_back(&timeUnit);

	for (list<BaseUnit*>::iterator it = unitList.begin(); it != unitList.end(); it++) {
		cout << (*it)->toString() << endl;
	}
	//int b = unit.getValue();
	//cout << b << endl;
	//Unit<int> u(11);
	//cout << u << endl;

	ofstream ofstream;/*
	ofstream.open("test.txt", ios_base::app);
	ofstream << "DATA" << endl;
	ofstream.close();*/

	string* name = new string("Name");
	cout << endl << *name << endl;

	string tmp;
	cout << endl << tmp.empty() << endl;

	/*char buffer[MAX_PATH];
	GetModuleFileName(NULL, buffer, MAX_PATH);
	std::string::size_type pos = std::string(buffer).find_last_of("\\/");
	std::cout << std::endl << std::endl << std::string(buffer).substr(0, pos) << std::endl << std::endl;*/

	const string str = " \t \t";
	size_t first = str.find_first_not_of(' ');
	if (string::npos == first)
	{
		cout << "STR = " << str << " STR LENGTH = " << str.length() << endl;
	}
	size_t last = str.find_last_not_of(' ');
	cout << "STR = " << str.substr(first, (last - first + 1)) << " STR LENGTH = " << str.length() << endl;

	//string* appDir = new string();
	//Utility::setAppDir(appDir);

}
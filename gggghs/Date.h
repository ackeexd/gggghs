using namespace std;
#include <Windows.h>
#include <iostream>
#pragma once

class Date
{
private:

	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);
	void Setday(int d);
	void Setmonth(int m);
	void Setyear(int y);
	int Getday();
	int Getmonth();
	int Getyear();
	void PrintDate() const;
	friend Date operator + (const Date& d1, int a);
	friend Date operator - (const Date& d1, const Date& d2);
	friend Date operator < (Date d1, Date d2);
	friend Date operator > (Date d1, Date d2);
	friend Date operator == (Date d1, Date d2);
	friend Date operator != (Date d1, Date d2);
};



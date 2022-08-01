#include "Date.h"

Date::Date() 
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	day = st.wDay;
	month = st.wMonth;
	year = st.wYear;
}
Date::Date(int d, int m, int y) 
{
	day = d;
	month = m;
	year = y;
}

void Date::Setday(int d)
{
	day = d;
}

void Date::Setmonth(int m)
{
	month = m;
}

void Date::Setyear(int y)
{
	year = y;
}

int Date::Getday()
{
	return day;
}

int Date::Getmonth()
{
	return month;
}

int Date::Getyear()
{
	return year;
}

void Date::PrintDate() const
{
	cout << day << month << year;
}

Date operator + (const Date& d1 , int a)
{
	return Date(d1 + a);
}

Date operator - (const Date& d1, const Date& d2)
{
	return Date(d1 - d2);
}

Date operator == (Date d1, Date d2)
{
	return d1 == d2;
}

Date operator != (Date d1, Date d2)
{
	return d1 != d2;
}

Date operator > (Date d1, Date d2)
{
	return d1 > d2;
}

Date operator < (Date d1, Date d2)
{
	return d1 < d2 ;
}




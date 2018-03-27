#include "stdafx.h"
#include "DATE.h"
#include <ostream>


DATE::DATE()
{
	setDay(01);
	setMonth(01);
	setYear(1970);
}

DATE::DATE(int dd, int mm, int yyyy)
{
	setDay(dd);
	setMonth(mm);
	setYear(yyyy);
}


DATE::~DATE()
= default;

int DATE::getDay() const
{
	return day;
}

int DATE::getMonth() const
{
	return month;
}


int DATE::getYear() const
{
	return year;
}

void DATE::setDay(int day)
{
	this->day = day;
}

void DATE::setMonth(int month)
{
	this->month = month;
}

void DATE::setYear(int year)
{
	this->year = year;
}

void DATE::setAll(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

bool DATE::isCorrect(int day, int month, int year)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
	{
		if (day == 31) return true;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 30) return true;
	}
	else if (month == 2)
	{
		if (day == 28 || day == 29) return true;
	}
	else return false;
	return false;
}

ostream& operator<<(ostream &os, const DATE dt)
{
	os << dt.day << "." << dt.month << "." << dt.year;
	return os;
}

//istream& operator >> (istream &is, DATE& dt)
//{
//	is >> dt.day >> dt.month >> dt.year;
//	return is;
//}

DATE &DATE::operator=(const DATE &rd)
{
	this->day = rd.day;
	this->month = rd.month;
	this->year = rd.year;
	return *this;
}

DATE DATE::operator+(DATE &rd)
{
	DATE res;
	res.day = this->day + rd.day;
	res.month = this->month + rd.month;
	res.year = this->year + rd.year;
	return res;
}

DATE DATE::operator-(DATE &rd)
{
	DATE res;
	res.day = this->day - rd.day;
	res.month = this->month - rd.month;
	res.year = this->year - rd.year;
	return res;
}

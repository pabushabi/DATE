#include "stdafx.h"
#include "DATE.h"


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
{
}

int DATE::getDay()
{
	return day;
}

int DATE::getMonth()
{
	return month;
}


int DATE::getYear()
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
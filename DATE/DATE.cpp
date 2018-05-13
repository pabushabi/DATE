#include "stdafx.h"
#include "DATE.h"
#include <iostream>

DATE::DATE()
{
	setDay(01);
	setMonth(01);
	setYear(1000);
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

bool DATE::isCorrect() const
{
	for (auto i = m_d.begin(); i != m_d.end(); i++)
		if (month == i->first)
			if (day <= i->second && day > 0)
				return true;
	return false;
}

ostream& operator << (ostream &os, const DATE dt)
{
	os << dt.day << "." << dt.month << "." << dt.year;
	return os;
}

istream& operator >> (istream &is, DATE& dt)
{
	is >> dt.day >> dt.month >> dt.year;
	return is;
}

DATE &DATE::operator = (const DATE &rd)
{
	if (this == &rd)
		return  *this;
	this->day = rd.day;
	this->month = rd.month;
	this->year = rd.year;
	return *this;
}

DATE DATE::operator + (const DATE &rd) const
{
	DATE res;
	res.day = this->day + rd.day;
	res.month = this->month + rd.month;
	res.year = this->year + rd.year;
	if (res.day > 31) 
	{
		res.month++;
		res.day -= 31;
	}
	if (res.month > 12)
	{
		res.year++;
		res.month -= 12;
	}
	return res;
}

DATE DATE::operator - (const DATE &rd) const
{
	DATE res;
	res.day = this->day - rd.day;
	res.month = this->month - rd.month;
	res.year = this->year - rd.year;
	if (res.day < 1)
	{
		res.month--;
		res.day += 31;
	}
	if (res.month < 1)
	{
		res.year--;
		res.month += 13;
	}
	return res;
}

bool operator > (const DATE &ld, const DATE &rd)
{
	if (ld.getYear() > rd.getYear())
		return true;
	else if (ld.getYear() == rd.getYear())
	{
		if (ld.getMonth() > rd.getMonth()) return true;
		else if (ld.getMonth() == rd.getMonth())
		{
			if (ld.getDay() > rd.getDay()) return true;
			else { return false; }
		}
	}
	return false;
}

bool operator < (const DATE &ld, const DATE &rd)
{
	if (ld.getYear() < rd.getYear())
		return true;
	else if (ld.getYear() == rd.getYear())
	{
		if (ld.getMonth() < rd.getMonth()) return true;
		else if (ld.getMonth() == rd.getMonth())
		{
			if (ld.getDay() < rd.getDay()) return true;
			else { return false; }
		}
	}
	return false;
}

bool operator == (const DATE &ld, const DATE &rd)
{
	if (ld.getYear() == rd.getYear() && ld.getMonth() == rd.getMonth() && 
		ld.getDay() == rd.getDay())
		return true;
	return false;
}

bool operator != (const DATE &ld, const DATE &rd)
{
	if (ld.getYear() != rd.getYear() && ld.getMonth() != rd.getMonth() &&
		ld.getDay() != rd.getDay())
		return true;
	return false;
}

int DATE::toDays()
{
	//int res = this->year * 365;
	int res = 0;
	int tmp = 0;
	int tmmp = 0;
	int tm = this->year;

	if (year >= 0)
	for (year--; year > 0; year--)
		for (auto i = m_d.begin(); i != m_d.end(); i++)
		{
			if (i->first == 2 && isLeap())
				tmp += i->second + 1;
			else  tmp += i->second;
		}
	else
	{
		for (year++; year < 0; year++)
			for (auto i = m_d.begin(); i != m_d.end(); i++)
			{
				if (i->first == 2 && isLeap())
					tmp += i->second + 1;
				else  tmp += i->second;
			}
	}

	for (auto j = m_d.begin(); j->first < month; j++)
		if (j->first == 2 && isLeap())
			tmmp += j->second + 1;
		else { tmmp += j->second; }

		this->year = tm;
		res += tmp + tmmp + this->day;
		return res;
}

float DATE::toMonths() const
{
	auto tmp = this->year * 12;
	float res = this->day / 12;
	res += tmp;
	return res;
}

string DATE::toString() const
{
	string res;
	res = this->getDay() + this->getMonth() + this->getYear();
	return res;
}

bool DATE::isLeap() const
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	return false; 

}

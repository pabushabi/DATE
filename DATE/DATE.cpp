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

bool DATE::isCorrect()
{
	if (month > 13 || month < 2 || day > 32 || day < 2)
	{
		return false;
	}
	return true;
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
	{
		return  *this;
	}
	this->day = rd.day;
	this->month = rd.month;
	this->year = rd.year;
	return *this;
}

DATE DATE::operator + (const DATE &rd)
{
	DATE res;
	res.day = this->day + rd.day;
	res.month = this->month + rd.month;
	res.year = this->year + rd.year;
	return res;
}

DATE DATE::operator - (const DATE &rd)
{
	DATE res;
	res.day = this->day - rd.day;
	res.month = this->month - rd.month;
	res.year = this->year - rd.year;
	return res;
}

bool operator > (const DATE &ld, const DATE &rd)
{
	if (ld.getYear() > rd.getYear())
	{
		return true;
	}
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
	{
		return true;
	}
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
	{
		return true;
	}
	return false;
}

int DATE::toDays() const
{
	int res = this->year * 365;
	int tmp = 0;

	switch (this->month)
	{
	case 1:
	{
		tmp += 31;
		break;
	}
	case 2:
	{
		tmp += 59;
		break;
	}
	case 3:
	{
		tmp += 90;
		break;
	}
	case 4:
	{
		tmp += 120;
		break;
	}
	case 5:
	{
		tmp += 151;
		break;
	}
	case 6:
	{
		tmp += 181;
		break;
	}
	case 7:
	{
		tmp += 212;
		break;
	}
	case 8:
	{
		tmp += 243;
		break;
	}
	case 9:
	{
		tmp += 273;
		break;
	}
	case 10:
	{
		tmp += 304;
		break;
	}
	case 11:
	{
		tmp += 334;
		break;
	}
	case 12:
	{
		tmp += 365;
		break;
	}
	}
	res += tmp + this->day;
	return res;
}

float DATE::toMonths()
{
	int tmp = this->year * 12;
	float res = this->day / 12;
	res += tmp;
	return res;
}

string DATE::toString()
{
	string res;
	res = this->getDay() + this->getMonth() + this->getYear();
	return res;
}
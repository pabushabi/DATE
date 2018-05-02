#pragma once
#include <ostream>
#include <ostream>
#include <istream>

using namespace std;

class DATE
{
public:
	DATE();
	~DATE();
	DATE(int dd, int mm, int yyyy);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	void setAll(int day, int month, int year);
	bool isCorrect() const;
	DATE& operator = (const DATE& rd);
	friend ostream& operator << (ostream& os, const DATE dt);
	friend istream& operator >> (istream& is, DATE& dt);
	DATE operator + (const DATE &rd) const;
	DATE operator - (const DATE &rd) const;
	friend bool operator > (const DATE &ld, const DATE &rd);
	friend bool operator < (const DATE &ld, const DATE &rd);
	friend bool operator == (const DATE &ld, const DATE &rd);
	friend bool operator != (const DATE &ld, const DATE &rd);
	int toDays() const;
	float toMonths() const;
	string toString() const;
	void leapYear();
	bool isLeap();

private:
	int day;
	int month;
	int year;
	bool leap = false;
};


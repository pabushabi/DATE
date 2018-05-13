#pragma once
#include <ostream>
#include <ostream>
#include <istream>
#include <map>

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
	int toDays() ;
	float toMonths() const;
	string toString() const;
	bool isLeap() const;

private:
	int day;
	int month;
	int year;
	map<int, int> m_d = { {1, 31},
	{2, 28},
	{3, 31},
	{4, 30},
	{5, 31},
	{6, 30},
	{7, 31},
	{8, 31},
	{9, 30},
	{10, 31},
	{11, 30},
	{12, 31}
	};
};


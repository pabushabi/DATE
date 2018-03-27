#pragma once
#include <ostream>

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
	bool isCorrect(int day, int month, int year);
	DATE& operator=(const DATE& rd);
	friend ostream& operator << (ostream& os, const DATE dt);
	//friend istream& operator >> (istream& is, DATE& dt);
	DATE DATE::operator + (DATE &rd);
	DATE DATE::operator-(DATE &rd);

private:
	int day;
	int month;
	int year;
};


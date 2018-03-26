#pragma once
class DATE
{
public:
	DATE();
	~DATE();
	DATE(int dd, int mm, int yyyy);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

private:
	int day;
	int month;
	int year;
};


#pragma once
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

private:
	int day;
	int month;
	int year;
};


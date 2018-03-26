// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "DATE.h"

using namespace std;

int main()
{
	DATE dt;

	cout << dt.getDay() << "." << dt.getMonth() << "." << dt.getYear() << endl;

	int dd, mm, yy;
	cin >> dd >> mm >> yy;
	DATE dtt(dd, mm, yy);

	cout << dtt.getDay() << "." << dtt.getMonth() << "." << dtt.getYear() << endl;

    return 0;
}


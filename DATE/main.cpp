// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "DATE.h"

using namespace std;

int main()
{
	DATE dt;

	cout << dt << endl;

	//int dd, mm, yy;
	//cin >> dd >> mm >> yy;
	DATE dtt;
	cin >> dtt;
	cout << dtt << endl;

	dt = dt + dtt;

	cout << dt << endl;
	cout << dt.toDays() << endl;
	cout << dt.toMonths() << endl;

	if (dt.isCorrect()) cout << "correct" << endl;
	else cout << "isn`t correct" << endl;

    return 0;
}


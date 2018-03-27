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

	int dd, mm, yy;
	cin >> dd >> mm >> yy;
	DATE dtt(dd, mm, yy);
	//cin >> dtt;
	cout << dtt << endl;

	dt = dt + dtt;

	cout << dt;

    return 0;
}


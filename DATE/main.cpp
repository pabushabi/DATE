// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "DATE.h"

using namespace std;

int main()
{
	DATE dt;
	//cin >> dt;
	cout << dt << endl;

	DATE dtt;
	cin >> dtt;
//	cin >> dtt;
//	cout << dtt << endl;
//
//	dt = dt + dtt;
//
//	cout << dt << endl;
	cout << dt.toDays() << endl;
	cout << dtt.toDays() << endl;
//	cout << dt.toMonths() << endl;
//
//	if (dt.isCorrect()) { cout << "correct" << endl; }
//	else { cout << "isn`t correct" << endl; }
	

//	cin >> dttt;
//	if (dttt == dt) cout << "yes" << endl;
//	else cout << "no" << endl;
	DATE dttt = dt - dtt;
	cout << dttt;

    return 0;
}


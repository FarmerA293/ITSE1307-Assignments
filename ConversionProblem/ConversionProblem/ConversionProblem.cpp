// Andrew Farmer
// ITSE 1307
// Coverting Problem Homework
// Converting Celsius to Fahrenheit

#include "stdafx.h"
#include <iostream>
using namespace std;

const float fltCel = 1;
const float fltFah = fltCel * 1.8 + 32;

int main()
{
	float fltCel = 1;
	float fltFah = fltCel * 1.8 + 32; 

	cout << "Enter temperture in Celsius: ";
	cin >> fltCel;
	cout << endl;

	fltFah = fltCel * 1.8 + 32;

	cout << "Temperture in Fahrenheit:";
	cout << fltFah << endl;

	return 0;
}


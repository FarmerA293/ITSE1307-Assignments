// Andrew Farmer
// ITSE 1307
// Class Assignment
// Converting km to miles

#include "stdafx.h"
#include <iostream>
using namespace std;

const float fltMiles = 1;
const float fltKilometers = 1.6;

int main()
{
	float fltKilometers = 1.6;
	float fltMiles = 1;
	float fltMilesConvert = fltKilometers / fltMiles;

	cout << "Enter the number of Kilometers: ";
	cin >> fltMiles;
	cout << endl;

	fltMilesConvert = fltKilometers / fltMiles;

	cout << "Total Miles is:";
	cout << fltMilesConvert << endl;

	return 0;
}


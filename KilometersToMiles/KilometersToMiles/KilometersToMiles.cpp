// Andrew Farmer
// ITSE 1307
// Class Assignment
// Converting km to miles

#include "stdafx.h"
#include <iostream>
using namespace std;

const float fltMiles = 1;
const double fltKilometers = 1.6;

int main()
{
	double fltKilometer = 1.6;
	float fltMiles = 1;
	double fltMilesConvert = fltMiles / fltKilometers;

	cout << "Enter the number of Kilometers: ";
	cin >> fltMiles;

    fltMilesConvert = fltMiles / fltKilometers;

	cout << "Total Miles is: ";
	cout << fltMilesConvert << endl;

		return 0;
}
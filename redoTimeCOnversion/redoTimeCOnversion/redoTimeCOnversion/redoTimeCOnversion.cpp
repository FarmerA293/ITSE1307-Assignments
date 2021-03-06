// Andrew Farmer
// ITSE 1307
// Time Conversion Redo
// Converting time to a 12 hour or 24 hour clock.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

int getTotalMinutes(int intHours, int intMinutes) {
	return(intHours * 60) + intMinutes;
}

int getHours(int intTotalHours) {
	cout << "Enter the Hours: " << endl;
	cin >> intTotalHours;
	return intTotalHours / 60;
}

int getMinutes(int intTotalMinutes) {
	cout << "Enter the minutes: " << endl;
	cin >> intTotalMinutes;
	return intTotalMinutes % 60;
}

int getIntInput(string strMessage, int intMin, int intMax) {
	int intNumber = intMin;
	do {
		cout << strMessage << ": (" << intMin << " - "  << intMax << ") ";
		cin >> intNumber;
	} while (intNumber < intMin || intNumber > intMax);
	return intNumber;
}

void printTime(int intTotalMinutes, int intFormat12Or24) {
	if(intFormat12Or24 == 12){
		int intHours = getHours(intTotalMinutes);
		if (intHours == 0) {
			intHours = 12;
		}
		else if (intHours >= 13) {
			intHours -= 12;
		}

		cout << setw(2) << intHours << ":" << setw(2) << setfill('0') << getMinutes(intTotalMinutes) << (getHours(intTotalMinutes) > 12 ? "AM" : "PM") << endl;
	}
	else {
		cout << setw(2) << setfill('0') << getHours(intTotalMinutes) << ":" << setw(2) << setfill('0') << getMinutes(intTotalMinutes) << endl;
	}
}

int main()
{
	int intTotalMinutes = 0;
	printTime(1,1);

    return 0;
}


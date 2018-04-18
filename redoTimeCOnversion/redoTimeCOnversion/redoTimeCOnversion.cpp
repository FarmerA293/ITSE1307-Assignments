// redoTimeCOnversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int getTotalMinutes(int intHours, int intMinutes) {
	return(intHours * 60) + intMinutes;
}

int getHours(int intTotalMinutes) {
	return intTotalMinutes / 60;
}

int getMinutes(int intTotalMinutes) {
	return intTotalMinutes % 60;
}

int getIntInput(string strMessage, int intMin, int intMax) {
	int intNumber = 0;
	//To Do: Display message
	//logix here to loop until it is within the min and the max.
	cout << "Enter the time: ";
	cin >> intNumber;
	do {
		cout << intNumber << endl;
	} while (intNumber < 0 || intNumber > 2400);

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
	printTime(intTotalMinutes, getIntInput);

    return 0;
}


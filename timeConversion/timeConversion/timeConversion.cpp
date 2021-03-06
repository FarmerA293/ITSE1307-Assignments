// Andrew Farmer
// ITSE 1307
// Time Conversion
// Convert from 12 hour clock to 24 hour clock and vice versa.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;


int convertFullClock(int intFullClock = 1);
int convertHalfClock(int intHalfClock = 1);
int printMenu();
char getMenuChoice();
string strMessage = " ";


int main()
{
	while (getMenuChoice() != 'Q');

    return 0;
}

int convertFullClock(int intFullClock) {
	char chrTime = ' ';

	cout << "Is it AM or PM? (Type A for AM or P for PM): ";
	cin >> chrTime;
	chrTime = toupper(chrTime);
	
	switch(chrTime){
	case 'A': 
		cout << intFullClock << "AM" << endl;
		break;
	case 'P':
		intFullClock = intFullClock + 12;
		cout << intFullClock << "PM" << endl;
		break;
	default:
		cerr << "Invalid Input" << endl;
	}
	return intFullClock;
}

int convertHalfClock(int intHalfClock) {
	if (intHalfClock > 12) {
		intHalfClock = intHalfClock - 12;
		cout << intHalfClock << "PM" << endl;
	}
	else if (intHalfClock <= 12) {
		cout << intHalfClock << "AM" << endl;
	}
	return intHalfClock;
}

int printMenu() {
	cout << "Time conversion menu: " << endl;
	cout << "F) Convert from 12-Hour to 24-hour clock." << endl;
	cout << "H) Convert from 24-Hour to 12-hour clock." << endl;
	cout << "Enter F, H, or Q (quit):  ";
	return 0;
 }

double inputofUser(string strMessage) {
	double dblUserInput = 0;
	strMessage = "What is the current time:";
	cout << strMessage;
	cin >> dblUserInput;
	return dblUserInput;
}

char getMenuChoice() {
	char chrChoice = ' ';
	printMenu();
	cin >> chrChoice;
	chrChoice = toupper(chrChoice);
	switch (chrChoice) {
	case 'F': 
		cout << "Converted Time: " << convertFullClock(inputofUser(strMessage)) << endl;
		break;
	case 'H':
		cout << "Converted Time: " << convertHalfClock(inputofUser(strMessage)) << endl;
		break;
	case 'Q':
		cout << "Quitting" << endl;
		break;
	default:
		cerr << "Invalid User Choice" << endl;
	}
	return chrChoice;
}

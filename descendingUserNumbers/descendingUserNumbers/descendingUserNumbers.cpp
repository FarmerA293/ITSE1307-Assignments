// Andrew Farmer
// ITSE 1307
// Descending user numbers
// User inputs 3 numbers, program orders it in descending order. 

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int intAlpha = 1;
	int intBravo = 1;
	int intCharlie = 1;

	cout << "Please enter a number for Alpha: " << endl;
	cin >> intAlpha;

	cout << "Plese enter a number for Beta: " << endl;
	cin >> intBravo;

	cout << "Please enter a number for Charlie: " << endl;
	cin >> intCharlie;

	if ((intAlpha < intBravo) && (intBravo < intCharlie)) {
		cout << intCharlie << " | " << intBravo << " | " << intAlpha << endl;
	}
	else if ((intAlpha < intBravo) && (intBravo > intCharlie) && (intAlpha < intCharlie)) {
		cout << intBravo << " | " << intCharlie << " | " << intAlpha << endl;
	}
	else if ((intAlpha > intBravo) && (intBravo > intCharlie)) {
		cout << intAlpha << " | " << intBravo << " | " << intCharlie << endl;
	}
	else if ((intAlpha > intBravo) && (intBravo < intCharlie) && (intAlpha > intCharlie)) {
		cout << intAlpha << " | " << intCharlie << " | " << intBravo << endl;
	}
	else if ((intAlpha > intBravo) && (intBravo < intCharlie) && (intAlpha < intCharlie)) {
		cout << intCharlie << " | " << intAlpha << " | " << intBravo << endl;
	}
	else if ((intAlpha < intBravo) && (intBravo > intCharlie) && (intAlpha > intCharlie)) {
		cout << intBravo << " | " << intAlpha << " | " << intCharlie << endl;
	}

    return 0;
}


// Andrew Farmer
// ITSE 1307
// Programming Problem Net Zero
// Finding if a number is negative, positive, or zero.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intNumber = 0;

	cout << "Please enter a number: ";
	cin >> intNumber;


	if (intNumber > 0) {
		cout << "Positive." << endl;
	}
	else if (intNumber < 0) {
		cout << "Negative." << endl;
	}
	else {
		cout << "Zero." << endl;
	}

	
    return 0;
}


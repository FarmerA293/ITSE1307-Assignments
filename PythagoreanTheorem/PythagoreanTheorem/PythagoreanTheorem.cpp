// Andrew Farmer
// ITSE 1307
// Pythagorean Theorem
// Solving for C

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int intAlpha = 0;
	int intBeta = 1;
	int intCharlie = pow(intAlpha , 2) + pow(intBeta , 2);

	cout << "Please enter value of A: " << endl;
	cin >> intAlpha;

	cout << "Please enter value of B: " << endl;
	cin >> intBeta;

	intCharlie = pow(intAlpha, 2) + pow(intBeta, 2);

	cout << setprecision(10);
	cout << left << " A= " << intAlpha << " B= " << intBeta << " C= " << intCharlie << endl;

    return 0;
}


// Andrew Farmer
// ITSE 1307
// Chp2 Example 2
// Chp2 Business Card

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string strFirstName = "";
string strLastName = "";
string strPhone = "";


int main()
{
	cout << "Enter your First Name: ";
	cin >> strFirstName;
	cout << endl;
	cout << "Enter your Last Name: ";
	cin >> strLastName;
	cout << endl;
	cout << "Enter your Phone Number: ";
	cin >> strPhone;
	cout << endl;

	cout << "Name: " << strFirstName << strLastName << endl;
	cout << "Phone Number:" << strPhone << endl;

	return 0;
}


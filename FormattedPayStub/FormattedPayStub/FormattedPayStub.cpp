// Andrew Farmer
// ITSE 1307
// Formatting Paystub
// Using fillers and math.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string strFullName;
	int intGrossAmount = 0;
	double NetPay;
	double IncomeTax;
	double StateTax;
	double SSTax = .525;
	double MediTax = .275;
	double Pension = .05;
	int Health = 75;

	cout << fixed << showpoint << setprecision(2);
	
	cout << " Please enter your Full Name: "; 
	getline(cin, strFullName);
	cout << " Please enter Gross Amount: ";
	cin	>> intGrossAmount;
	cout << endl;

	IncomeTax = intGrossAmount * .15;
	StateTax = 0;
	SSTax = intGrossAmount * .0525;
	MediTax = intGrossAmount * .0275;
	Pension = intGrossAmount * .05; 
	Health = 75;
	NetPay = intGrossAmount - (IncomeTax + SSTax + MediTax + Pension - Health);


	cout << strFullName << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Gross Pay: " << right << "$" << intGrossAmount << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Federal Income Tax: " << right << "$" << IncomeTax << endl;
	cout << setfill('.') << setw(25);
	cout << left << "State Tax: " << right << "$" << StateTax << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Social Security Tax: " << right << "$" << SSTax << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Medicaid/Medicare Tax: " << right << "$" << MediTax << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Pension Plan: " << right << "$" << Pension << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Health Insurance: " << right << "$" << Health << endl;
	cout << setfill('.') << setw(25);
	cout << left << "Net Pay: " << right << "$" << NetPay << endl;

    return 0;
}


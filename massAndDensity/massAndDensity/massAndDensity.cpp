// Andrew Farmer
// ITSE 1307
// Mass and Density
// Finding the density of of an object using file input and output.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


int main()
{
	double dblMass = 1;
	double dblVolume = 1;
	double dblDensity = 1;
	ofstream fileAddressOut;
	ifstream fileAddressIn;
	string strinputFileName = "input.dat";
	string stroutputFileName = "output.txt";

	fileAddressIn.open("input.dat");
	fileAddressOut.open("output.txt");
	cout << "Enter the weight of cube in grams: " << endl;
	cin >> dblMass;

	cout << "Enter the cube's density: " << endl;
	cin >> dblDensity;

	dblVolume = dblMass / dblDensity;
	
	cout << fixed << setprecision(2);
	cout << "Mass: " << dblMass << "g" << endl;
	cout << fixed << setprecision(2);
	cout << "Density: " << dblDensity << "g per cubic centimeters" << endl;
	cout << fixed << setprecision(2);
	cout << "Volume: " << dblVolume << " cubic centimeters" << endl;
	fileAddressIn.close();
	fileAddressOut.close();

    return 0;
}


// Andrew Farmer
// ITSE 1307
// Programming Problem Square Footage
// User inputs the home base price and square footage and picks the lowest priced home.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double dblColonialBasePrice = 1.0;
	double dblColonialSquareFootage = 1.0;
	double dblSingleBasePrice = 1.0;
	double dblSingleSquareFootage = 1.0;
	double dblSplitBasePrice = 1.0;
	double dblSplitSquareFootage = 1.0;
	double dblColonialPerSquareFoot = 1.0;
	double dblSinglePerSquareFoot = 1.0;
	double dblSplitPerSquareFoot = 1.0;

	cout << "Please enter Base Price of Colonial home: " << endl;
	cin >> dblColonialBasePrice;

	cout << "Please enter Square Footage of Colonial home: " << endl;
	cin >> dblColonialSquareFootage;

	cout << "Please enter Base Price of Split-Entry home: " << endl;
	cin >> dblSplitBasePrice;

	cout << "Please enter the Sqaure Footage of Split-Entry home: " << endl;
	cin >> dblSplitSquareFootage;

	cout << "Please enter the Base Price of Single-Story home: " << endl;
	cin >> dblSingleBasePrice;

	cout << "Please enter the Square Footage of Single-Story home: " << endl;
	cin >> dblSingleSquareFootage;

	dblColonialPerSquareFoot = dblColonialBasePrice / dblColonialSquareFootage;
	dblSinglePerSquareFoot = dblSingleBasePrice / dblSingleSquareFootage;
	dblSplitPerSquareFoot = dblSplitBasePrice / dblSplitSquareFootage;

	cout << "Model: " << " | " << "Base Price: " << " | " << "Square Footage: " << " | " << "Per Square Foot Price:" <<endl;
	cout << setprecision(2) << fixed;
	cout << "Colonial: | $" << dblColonialBasePrice << " | " << dblColonialSquareFootage << "sqft"
		<< " | " << dblColonialPerSquareFoot << endl;
	cout << setprecision(2) << fixed;
	cout << "Split-Entry: | $" << dblSplitBasePrice << " | " << dblSplitSquareFootage << "sqft"
		<< " | " << dblSplitPerSquareFoot << endl;
	cout << setprecision(2) << fixed;
	cout << "Single-Story: | $" << dblSingleBasePrice << " | " << dblSingleSquareFootage << "sqft" 
		<< " | " << dblSinglePerSquareFoot << endl;
	
	if ((dblColonialPerSquareFoot < dblSinglePerSquareFoot) && (dblSinglePerSquareFoot < dblSplitPerSquareFoot)) {
		cout << "Best Price: Colonial Home" << endl;
	}
	else if ((dblColonialPerSquareFoot > dblSinglePerSquareFoot) && (dblSinglePerSquareFoot > dblSplitPerSquareFoot)) {
		cout << "Best Price: Split-Entry Home" << endl;
	}
	else if ((dblColonialPerSquareFoot > dblSinglePerSquareFoot) && (dblSinglePerSquareFoot < dblSplitPerSquareFoot)) {
		cout << "Best Price: Single-Story Home" << endl;
	}
	else if ((dblColonialPerSquareFoot == dblSinglePerSquareFoot) && (dblSinglePerSquareFoot < dblSplitPerSquareFoot)) {
		cout << "Best Price: Colonial and Single-Story Homes." << endl;
	}
	else if ((dblColonialPerSquareFoot > dblSinglePerSquareFoot) && (dblSinglePerSquareFoot == dblSplitPerSquareFoot)) {
		cout << "Best Price: Split Entry and Single-Story Homes." << endl;
	}
	else if ((dblColonialPerSquareFoot == dblSplitPerSquareFoot) && (dblSplitPerSquareFoot < dblSinglePerSquareFoot)) {
		cout << "Best Price: Colonial and Split Entry Homes." << endl;
	}
	else if ((dblColonialPerSquareFoot == dblSinglePerSquareFoot) && (dblSinglePerSquareFoot == dblSplitPerSquareFoot)) {
		cout << "Best Price: All are the same price per square foot." << endl;
	}
    return 0;
}


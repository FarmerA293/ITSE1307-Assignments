// Andrew Farmer
// ITSE 1307
// Shopping Cart 
// User enters number of items and prices, program outputs total billing

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int intTotalNumberofItems = 0;
	double dblPriceofItem = 0.0;
	double dblTotalPrice = 0.0;
	double dblPriceWithShipping = 0.0;
	
	cout << "Enter total number of items: " << endl;
	cin >> intTotalNumberofItems;

	do 
	{
		cout << "Price of item: " << endl;
		cin >> dblPriceofItem;
		dblTotalPrice += dblPriceofItem;
	} while (dblPriceofItem > 0.0);
	
	dblPriceWithShipping = dblTotalPrice + (intTotalNumberofItems * 10);

	if (dblTotalPrice < 200)
		cout << "Total Price: $" << dblPriceWithShipping << endl;

	else 
		cout << "Total Price: $" << dblTotalPrice << endl;;
	

	    return 0;
}


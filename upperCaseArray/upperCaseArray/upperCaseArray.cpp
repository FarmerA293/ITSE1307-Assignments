// Andrew Farmer
// ITSE 1307
// Converting lower case with arrays
// Converting lower case to upper case using arrays and functions. 

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

void getCharactersToCapalize(string& strLetters) {
	for (int intNumberofLetters = 0; intNumberofLetters < strLetters.length(); intNumberofLetters++) {
		strLetters[intNumberofLetters] = toupper(strLetters[intNumberofLetters]);
	}
}


int main()
{
	string strLetters = " ";
	cout << "Enter letters to capatalize: ";
	getline(cin, strLetters);
	getCharactersToCapalize(strLetters);
	cout << strLetters << endl;


    return 0;
}


// Andrew Farmer
// ITSE 1307
// Programming Problem Removing Vowels
// Program removes the vowels from a user's inputted string.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool ifVowel(char chVowels) {
	switch ('A', 'E', 'I', 'O', 'U', 'Y')
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'Y':
		return true;
	}
}

int main()
{
	string strUserString = " ";

	cout << "Enter a word: ";
	cin >> strUserString;

	cout << strUserString << endl;
	//cout << strUserString.substr();

    return 0;
}


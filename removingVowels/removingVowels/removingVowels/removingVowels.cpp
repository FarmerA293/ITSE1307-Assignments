// Andrew Farmer
// ITSE 1307
// Programming Problem Removing Vowels
// Program removes the vowels from a user's inputted string.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool isVowel(char chVowels) {
	switch (chVowels) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'Y':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return true;

	default: 
		return false;
	}
}

void removeVowels(string& strUserInput) {
	string strNew = " ";
	int substrLength = 0;
	int intStart = 0;
	bool startSet = false;
	for(int intIndex = 0; intIndex <strUserInput.length(); intIndex++)
	{
		if (!isVowel(strUserInput[intIndex])){
			substrLength++;
			if (!startSet) {
				intStart = intIndex;
				startSet = true;
			}
		}
		else {
			strNew += strUserInput.substr(intStart, substrLength);
			substrLength = 0;
			intStart = 0;
			startSet = false;
		}
	}
	
	strUserInput = strNew;
}

int main()
{
	string strUserInput = " ";
	
	cout << "Enter a sequence of letters: " << endl;
	getline(cin, strUserInput);
	
	removeVowels(strUserInput);

	cout << "Your sequence without vowels: " << strUserInput.substr(0, 100) << endl;
    
	return 0;
}


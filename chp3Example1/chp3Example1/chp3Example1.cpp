// Andrew Farmer
// ITSE 1307
// Length of User
// Length of line

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char chrLetter = 1;
	int intNumber = 1;
	string strWord = "Blank" ;
	cout << " Chapter 3: Input and Output " << endl;
	cout << " Enter a letter use a space and enter a number: " << endl;
	cin >> chrLetter >> intNumber;
	cout << " Enter a string: " << endl;
	//cin >> strWord;
	cin.ignore();
	getline(cin, strWord);
	cout << " Number: " << intNumber << " Letter: " << chrLetter << endl;
	cout << " Word: " << strWord << " Word Length: " << strWord.length() << endl;

    return 0;
}


// Andrew Farmer
// ITSE 1307
// Programming Problem 4/10/2018
// User can pick a seat number to reserve.

#include "stdafx.h"
#include <iostream>
using namespace std;

const int INT_ROWS = 12;
const int INT_COLUMNS = 6;


void printSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout << "Row " << (intRow + 1) << " ";
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			arySeats[intRow][intColumn] = '*';
		}
	}
}

void getUserSeats(int intRow, int intColumn) {
	cout << "Enter the row number of your seat 1-6: ";
	cin >> intRow;
	cout << "Enter the column number of your seat 1-12: ";
	cin >> intColumn;
}

void fillSeat(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'X';
}

int main()
{
	char arySeats[INT_ROWS][INT_COLUMNS];
	getUserSeats(INT_ROWS, INT_COLUMNS);
	printSeats(arySeats, INT_ROWS);
	clearSeats(arySeats, INT_ROWS);
	fillSeat(arySeats,	INT_ROWS, 1, 1);
	printSeats(arySeats, INT_ROWS);
	return 0;
}
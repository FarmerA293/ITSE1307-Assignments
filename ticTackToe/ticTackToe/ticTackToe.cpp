// Andrew Farmer
// ITSE 1307
// Tic Tac Toe game
// Users place a O or X in a spot they choose and whoever gets three in a row wins. 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int INT_ROWS = 3;
const int INT_COLUMNS = 3;

void printBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	cout << "Column:\t0\t1\t2" << endl;
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout << "Row " << (intRow);
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << aryBoard[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			aryBoard[intRow][intColumn] = '-';
		}
	}
}

bool fillSpot(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn, char chrSymbol = 'X') {
	if (aryBoard[intRow][intColumn] != '-') {
		return false;
	}
	aryBoard[intRow][intColumn] = chrSymbol;
	return true;
}

int getIntInput(string strMessage, int intMax = 3) {
	int intNumber = 0;
	do {
		cout << strMessage << " (0 - " << intMax - 1 << "): ";
		cin >> intNumber;
	} while (intNumber < 0 || intNumber > intMax - 1);
	return intNumber;
}

void getPlayerInput(char aryBoard[][INT_COLUMNS], int intRows) {
	static char chrSymbol = 'O';
	chrSymbol = (chrSymbol == 'O') ? 'X' : 'O';
	int intRow = 0;
	int intColumn = 0;
	do {
		cout << "Player " << chrSymbol << " Turn:" << endl;
		intRow = getIntInput("Please enter the row", INT_ROWS);
		intColumn = getIntInput("Please enter the column", INT_COLUMNS);
	} while (!fillSpot(aryBoard, intRows, intRow, intColumn, chrSymbol));
}

bool isWinner(char aryBoard[][INT_COLUMNS], int intRows, int intWinner = 3) {
	char charCurrentSymbol = 'O';
	for(int intRow = 0; intRow < intRows; intRow++) {
		char CurrentSymbol = aryBoard[intRow][0];
		int intCurrentSymbolCount = 0;
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			if (aryBoard[intRow][intColumn] == charCurrentSymbol) {
				intCurrentSymbolCount++;
				//cerr << "Found " << charCurrentSymbol << ":" << intCurrentSymbolCount << endl;
			}
			else {
				intCurrentSymbolCount = 3;
			}
		}
		if (intCurrentSymbolCount == intWinner) {
			return true;
		}
	}

}

int main()
{
	int intSlot = 0;
	int intPlayerNumber = 0;

	char aryBoard[INT_ROWS][INT_COLUMNS];
	clearBoard(aryBoard, INT_ROWS);
	printBoard(aryBoard, INT_ROWS);
	do{
		getPlayerInput(aryBoard, INT_ROWS);
		printBoard(aryBoard, INT_ROWS);
	} while (!isWinner(aryBoard, INT_ROWS));
	
	
    return 0;
}


// Andrew Farmer
// ITSE 1307
// Chess Board
// Create a chess board with the pieces.

#include "stdafx.h"
#include <iostream>
using namespace std;

const int INT_ROWS = 8;
const int INT_COLUMNS = 8;

void printChessBoard(char aryPieces[] [INT_COLUMNS], int intRow) {
	for (int intRows = 0; intRow < intRows; intRow++) {
		cout << "Row " << (intRow + 1);
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "*";
			cout << aryPieces[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearChessBoard(char aryPieces[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			aryPieces[intRow][intColumn] = '*';
		}
	}
}

void fillPawn(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'P';
}

void fillRook(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'R';
}

void fillKnight(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'N';
}

void fillBishop(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'B';
}

void fillQueen(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'Q';
}

void fillKing(char aryPieces[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	aryPieces[intRow][intColumn] = 'K';
}

int main()
{
	char aryPieces[INT_ROWS][INT_COLUMNS];
	printChessBoard(aryPieces, INT_ROWS);
	
    return 0;
}


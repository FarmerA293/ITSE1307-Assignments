// Andrew Farmer
// ITSE 1307
// Chess Board
// Create a chess board with the pieces.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//const variables for the board spots.
const int INT_ROWS = 8;
const int INT_COLUMNS = 8;

//Prints the board.
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

//replaces the board spot with the chess piece. 
void clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			aryBoard[intRow][intColumn] = '-';
			aryBoard[0][0] = 'r', aryBoard[0][7] = 'r', aryBoard[1][0] = 'p', aryBoard[1][1] = 'p', aryBoard[1][2] = 'p', aryBoard[1][3] = 'p', aryBoard[1][4] = 'p', aryBoard[1][5] = 'p';
			aryBoard[1][6] = 'p', aryBoard[1][7] = 'p', aryBoard[0][2] = 'b', aryBoard[0][3] = 'q', aryBoard[0][4] = 'k', aryBoard[0][5] = 'b', aryBoard[0][6] = 'n', aryBoard[0][1] = 'n';
			aryBoard[6][0] = 'P', aryBoard[6][1] = 'P', aryBoard[6][2] = 'P', aryBoard[6][3] = 'P', aryBoard[6][4] = 'P', aryBoard[6][5] = 'P', aryBoard[6][6] = 'P', aryBoard[6][7] = 'P';
			aryBoard[7][0] = 'R', aryBoard[7][1] = 'N', aryBoard[7][2] = 'B', aryBoard[7][3] = 'Q', aryBoard[7][4] = 'K', aryBoard[7][5] = 'B', aryBoard[7][6] = 'N', aryBoard[7][7] = 'R';

		}
	}
}

int main(){
	char aryBoard[INT_ROWS][INT_COLUMNS];
	clearBoard(aryBoard, INT_ROWS);
	printBoard(aryBoard, INT_ROWS);

	return 0;
}

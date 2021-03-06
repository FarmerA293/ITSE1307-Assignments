// Andrew Farmer
// ITSE 1307
// Mao Card Game
// User can play with friends in a card game similar to uno. Place bet, play your cards to remove from hand. First person to lose all cards from hand wins.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "Player.h"
using namespace std;


void testCard() {
	Card objCard(1);
	cout << "Card Testing" << endl;
	cout << objCard.getValue() << endl
		<< objCard.getFaceValue() << endl
		<< objCard.getFaceString() << endl
		<< objCard.getSuiteValue() << endl
		<< objCard.getSuiteString() << endl
		<< objCard.toString() << endl;
	objCard.setValue(45);
}

void testDeck() {
	Deck objDeck = Deck();
	cout << "Deck Testing" << endl;
	objDeck.printDeck();
	//Get cards until we reach the shuffle point you can also get cards until you reach NULL
	do {
		objDeck.getCard();
		cout << "Percentage: " << objDeck.getPercentOfDeckDealt() << endl;
	} while (!objDeck.shouldShuffle());
	if (objDeck.shouldShuffle()) {
		objDeck.shuffle();
	}
	objDeck.printDeck();
}

void testDiscardPile() {
	Deck objDeck = Deck(4);
	objDeck.shuffle();
	DiscardPile objDiscard = DiscardPile();
	Card objCardToDiscard = objDeck.getCard();
	cout << objCardToDiscard.toString() << endl;
	objDiscard.addCard(objCardToDiscard);
	cout << objDiscard.getTopCard().toString() << endl;
}

void testPlayer() {
	Player objPlayerOne = Player();
	Player objPlayerTwo = Player();
	Deck objDeck = Deck(4);
	DiscardPile objDiscard = DiscardPile();
	objDeck.shuffle();
	objPlayerOne.setBet(5);
	objPlayerTwo.setMoney(300);
	objPlayerTwo.setBet(400);
	for (int intCards = 0; intCards < 7; intCards++) {
		objPlayerOne.addCardToHand(objDeck.getCard());
		objPlayerTwo.addCardToHand(objDeck.getCard());
	}
	objPlayerOne.printHand();
	objPlayerOne.clearHand();
	objPlayerOne.printHand();
	cout << "-----" << endl;
	objPlayerTwo.printHand();
	//HINT: Logic for checking if player card can be added to discard.
	Card cardPlayerDiscard = objPlayerTwo.removeCardFromHand(0); //Remove card 1 NOTE: it's the index, index starts at zero
	if (objDiscard.checkValidCard(cardPlayerDiscard)) { //Check if it can be added to discard
		objDiscard.addCard(cardPlayerDiscard); //Add to discard
	}
	else { //Nope
		objPlayerTwo.addCardToHand(cardPlayerDiscard); //Add back to players hand.
	}
	objPlayerTwo.printHand();
	cout << "-----" << endl;
	objPlayerOne.wonBet();
	objPlayerOne.printHand();
	objPlayerTwo.lostBet();
	objPlayerTwo.printHand();
}


int main()
{
	srand(time(0)); //Setup the randomness at the beginning of the program
	const int INTNUMBEROFDECKS = 3;
	const int INTPLAYERHANDSIZE = 7;
	const int INTMAXPLAYERS = 6;
	int intNumberOfPlayers = 0;
	char chCardSelection = ' ';

	//Uncomment to see different ways to use the different classes.
	//testCard();
	//testDeck();
	//testDiscardPile();
	//testPlayer();

	//TODO: Your custom logic here

	cout << "Welcome to Mao!" << endl;
	cout << endl << endl;
	cout << "Enter number of players: ";
	cin >> intNumberOfPlayers;
	
	switch (intNumberOfPlayers) {//Extra decks are added based on number of players.
	case 2: testDeck();
		break;
	case 3: testDeck();
		break;
	case 4: testDeck();
		break;
	case 5: testDeck();
		break;
	case 6: testDeck();
		break;
	default:
		cout << "Max is 6 players, enter number of players 6 or less.";
	}
	for (int intIndex = 0; intIndex < INTPLAYERHANDSIZE; intIndex++) {
		testDiscardPile();
		testPlayer();
		cout << "Which card do you want to play? ";
		cin >> chCardSelection;
		switch (chCardSelection)
		{// Player decides which card to play.
		case '1': Player();
		case '2': Player();
		case '3': Player();
		case '4': Player();
		case '5': Player();
		case '6': Player();
		case '7': Player();
		case 'D': &Player::addCardToHand;
		default:
			break;
		}
	}

	return 0;
}
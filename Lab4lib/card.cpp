#include "card.h"

Card::Card() {
	this->rank = 0;
	this->suit = 0;
}
Card::Card(unsigned int suit, unsigned int rank) {
	string mySuit[5] = { "Clubs", "Diamonds", "Hearts", "Spades", "Joker" };
	string myRanks[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",  "Ace" };

	this->rank = 12;

	if (suit < 4) {
		this->name.append(myRanks[rank]);
		this->name.append(" of ");
		this->rank = rank;
	}
	this->name.append(mySuit[suit]);
	this->suit = suit;
}

unsigned int Card::get_rank(){
	return this->rank;
}
unsigned int Card::get_suit() {
	return this->suit;
}
string Card::get_card() {
	return this->name;
}
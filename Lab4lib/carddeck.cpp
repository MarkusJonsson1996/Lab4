#include "carddeck.h"

Carddeck::Carddeck() {

	this->numCards = DECK_SIZE;

	int suit = 0;
	int rank = 0;
	int whatCard = 0;

	while (whatCard < DECK_SIZE) {

		this->deck[whatCard] = Card(suit, rank);

		if (rank >= 12 && suit < 4) {
			suit++;
			rank = 0;
		}
		else if (suit < 4) rank++;

		whatCard++;
	}

}
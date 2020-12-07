#pragma once
#include "card.h"

#define DECK_SIZE 55

class Carddeck {
public:
	
	Card* deck = new Card[DECK_SIZE];

	Carddeck();

private:
	unsigned int numCards;
};
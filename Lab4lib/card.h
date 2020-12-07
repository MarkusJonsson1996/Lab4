#pragma once
#include <string>

#define SUITS 5
#define RANKS 13

using namespace std;

class Card {
public:

	Card();
	Card(unsigned int suit, unsigned int rank);

	unsigned int get_suit();
	unsigned int get_rank();
	string get_card();

private:

	unsigned int rank;
	unsigned int suit;
	string name;

};
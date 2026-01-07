#include "deck.h"

// Constructor used to return shuffled deck
Deck::Deck(CardFactory* cardFactory) { *this = (*cardFactory).getDeck(); }

// A constructor which accepts an istream and reconstructs the deck from file.
Deck::Deck(istream &is, CardFactory *cardfactory) { 
	*this = cardfactory->loadDeckFromStream(is); 
}

// The draw() method returns and removes the top card from the deck.
Card* Deck::draw() {
	if (this->empty()) {
		cout << "Error: Deck is empty!" << endl;
		return nullptr;
	}
	else { // Draw top card from deck
		Card* top = this->back();
        this->pop_back();
        return top;
	}
}

// The insertion operator (friend) to insert all the cards in the deck to an std::ostream.
ostream & operator<<(ostream & os, Deck deck) {
	for(Card* card : deck) { card->print(os); os << " "; }
    return os;
}

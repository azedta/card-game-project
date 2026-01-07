#include "cardFactory.h"
#include "deck.cpp"
#include "card.cpp"

using namespace std;

// A constructor in which all the cards need to be created in the numbers needed for the game.
// (Based on the table)
CardFactory::CardFactory() { 		

    Card * card;
    deck = new Deck();

    // Creating black cards
    for (int i = 0; i < 10; i++) { 
      card = new black();   
      deck->push_back(card);
    }

    // Creating Blue cards
    for (int i = 0; i < 20; i++) {
      card = new Blue();
      deck->push_back(card);
    }

    // Creating Chili cards
    for (int i = 0; i < 18; i++) {
      card = new Chili();
      deck->push_back(card);
    }

    // Creating garden cards
    for (int i = 0; i < 6; i++) {
      card = new garden();
      deck->push_back(card);
    }

    // Creating Green cards
    for (int i = 0; i < 14; i++) {
      card = new Green();
      deck->push_back(card);
    }

    // Creating Red cards
    for (int i = 0; i < 8; i++) {
      card = new Red();
      deck->push_back(card);
    }

    // Creating soy cards
    for (int i = 0; i < 12; i++) {
      card = new soy();
      deck->push_back(card);
    }

    // Creating Stink cards
    for (int i = 0; i < 16; i++) {
      card = new Stink();
      deck->push_back(card);
    }

}

// The returns a pointer to the only instance of CardFactory.
CardFactory * CardFactory::getFactory() {

	static CardFactory cardfactory; 
	return &cardfactory;
}

// getDeck() returns a deck with all 104 bean cards. Note that the 104 bean cards are always the same
// but their order in the deck needs to be different every time.
Deck CardFactory::getDeck() {
    // Obtain a time-based seed
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // Use the shuffle method
    std::shuffle(deck->begin(), deck->end(), std::default_random_engine(seed));
    return *deck;
}

// This is a helper function to load deck from file
Deck CardFactory::loadDeckFromStream(istream &is) {
	
  int i = 0;
	deck = new Deck();
	char cardType[300]; // array used to stored all cards in deck
	is.getline(cardType, 300);

	while (cardType[i] != '\0') {
		Card* addedCard = getCardType(cardType[i]); // get card type
		if(addedCard != NULL) { // if card exists
			deck->push_back(addedCard); // add card to deck						
		}			
		i++;
	}
	return *deck;
}

// This is a helper function used to retrieve a specific card
Card* CardFactory::getCardType(char bean) {		
	
  Card * card = NULL;

	if (bean == 'b') card = new black();
	else if (bean == 'B') card = new Blue();
	else if (bean == 'C') card = new Chili();
	else if (bean == 'G') card = new Green();
	else if (bean == 'R') card = new Red();
	else if (bean == 'S') card = new Stink();
  else if (bean == 's') card = new soy();
  else if (bean == 'g') card = new garden();

	return card;
}
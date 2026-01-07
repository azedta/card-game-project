#ifndef cardFactory_h
#define cardFactory_h

#include <random>
#include <algorithm>
#include <chrono>
#include "card.h"

class Deck;

class CardFactory {

  private:
	  Deck* deck;

  public:
    
    CardFactory();
    
    static CardFactory* getFactory();
    Deck getDeck();
    Card* getCardType(char cardType);
    Deck loadDeckFromStream (istream & inputStream) ;

};

#endif
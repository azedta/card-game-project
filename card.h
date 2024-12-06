#ifndef card_h
#define card_h

#include <iostream>
#include <exception>
using namespace std;

/* The Card class is an abstract class, and 8 different bean cards will be derived from it*/
class Card {

  public :
    // Pure Virtual Functions

    /* The getCardsPerCoin method returns how many cards are needed to receive the correspondig 
    nbr of coins */
    virtual int getCardsPerCoin(int coins) = 0;

    /* The getName method returns the full name of the card*/
    virtual string getName() = 0;

    /* The print method inserts the first character for the card into the output stream 
    supplied as argument.*/
    virtual void print(ostream& out) const = 0;

    /* The friend function for a global stream insertion operator for printing any objects */
    friend ostream& operator<<(std::ostream& o, const Card& c) {
      c.print(o);
	    return o;
    }

};




#endif
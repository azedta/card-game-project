#include "card.h"

// Blue Bean Class publicly derived from Card
class Blue : public Card {

  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 4;
      } 
      else if (coins == 2){
        return 6;
      }
      else if (coins == 3){
        return 8;
      }
      else if (coins == 4){
        return 10;
      }

      return 0;
	  }

    string getName() {
		  return "Blue";
	  }

	  void print(ostream& out) const {
		  out << "B";
	  }

};

// Chili Bean Class publicly derived from Card
class Chili : public Card {

  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 3;
      } 
      else if (coins == 2){
        return 6;
      }
      else if (coins == 3){
        return 8;
      }
      else if (coins == 4){
        return 9;
      }

      return 0;
	  }

    string getName() {
		  return "Chili";
	  }

	  void print(ostream& out) const {
		  out << "C";
	  }

};

// Stink Bean Class publicly derived from Card
class Stink : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 3;
      } 
      else if (coins == 2){
        return 5;
      }
      else if (coins == 3){
        return 7;
      }
      else if (coins == 4){
        return 8;
      }

      return 0;
	  }

    string getName() {
		  return "Stink";
	  }

	  void print(ostream& out) const {
		  out << "S";
	  }

};

// Green Bean Class publicly derived from Card
class Green : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 3;
      } 
      else if (coins == 2){
        return 5;
      }
      else if (coins == 3){
        return 6;
      }
      else if (coins == 4){
        return 7;
      }

      return 0;
	  }

    string getName() {
		  return "Green";
	  }

	  void print(ostream& out) const {
		  out << "G";
	  }

};

// Red Bean Class publicly derived from Card
class Red : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 2;
      } 
      else if (coins == 2){
        return 3;
      }
      else if (coins == 3){
        return 4;
      }
      else if (coins == 4){
        return 5;
      }

      return 0;
	  }

    string getName() {
		  return "Red";
	  }

	  void print(ostream& out) const {
		  out << "R";
	  }

};

// soy Bean Class publicly derived from Card
class soy : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 2;
      } 
      else if (coins == 2){
        return 4;
      }
      else if (coins == 3){
        return 6;
      }
      else if (coins == 4){
        return 7;
      }

      return 0;
	  }

    string getName() {
		  return "soy";
	  }

	  void print(ostream& out) const {
		  out << "s";
	  }

};

// black Bean Class publicly derived from Card
class black : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 1) {
        return 2;
      } 
      else if (coins == 2){
        return 4;
      }
      else if (coins == 3){
        return 5;
      }
      else if (coins == 4){
        return 6;
      }

      return 0;
	  }

    string getName() {
		  return "black";
	  }

	  void print(ostream& out) const {
		  out << "b";
	  }

};

// garden Bean Class publicly derived from Card
class garden : public Card {
  
  public:

    // Based on the provided table
    int getCardsPerCoin(int coins) {
      if (coins == 2) {
        return 2;
      } 
      else if (coins == 3){
        return 3;
      }
    
      return 0;
	  }

    string getName() {
		  return "garden";
	  }

	  void print(ostream& out) const {
		  out << "g";
	  }

};